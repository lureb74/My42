/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:47:59 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/11 19:48:02 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *sdup;

	if (!(sdup = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	ft_memcpy(sdup, s, ft_strlen(s) + 1);
	return (sdup);
}
