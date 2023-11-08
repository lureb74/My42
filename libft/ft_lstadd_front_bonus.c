/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:07 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:01:48 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			new->next = *lst;
			*lst = new;
		}
	}
}
/*
// IL PRESENTE 'MAIN' TESTA, OLTRE A ft_lstadd_front, ANCHE ft_lstadd_back, ft_lstnew ED ft_lstsize
int main()
{
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	char	content0[10] = "CONTENT 0";
	char	content1[10] = "CONTENT 1";
	char	content2[10] = "CONTENT 2";
	char	content3[10] = "CONTENT 3";
	char	content4[10] = "CONTENT 4";
	char	content5[10] = "CONTENT 5";
	int		r;

	node0 = ft_lstnew(content0);
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(content4);
	node5 = ft_lstnew(content5);
	ft_lstadd_front(&node0, node1);
	ft_lstadd_back(&node0, node2);
	ft_lstadd_front(&node0, node3);
	ft_lstadd_back(&node0, node4);
	ft_lstadd_front(&node0, node5);
	r = ft_lstsize(node0);
	printf("%d\n", r);
	while (r > 0)
	{
		printf("The result is %s\n", (char *)node0[0].content);
		node0 = node0->next;
		r--;
	}
	return 0;
}*/
