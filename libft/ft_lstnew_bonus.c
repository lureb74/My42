/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:48:13 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:07:28 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pnt;

	pnt = (t_list *)malloc(sizeof(t_list));
	if (!pnt)
		return (NULL);
	pnt->content = content;
	pnt->next = NULL;
	return (pnt);
}
/*
int main()
{
	t_list	*new;

	new = ft_lstnew("\"Bla ble bli blo blu\"");
	printf("content: %s", (char *)new->content);
	free (new);
	return 0;
}*/
