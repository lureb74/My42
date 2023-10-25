/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:37 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/25 18:16:55 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	size_t	i;

	if (!s || !f)
		return (NULL);
	r = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
		{
			r[i] = (*f)(i, s[i]);
			i++;
		}
		r[i] = '\0';
		return (r);
}
