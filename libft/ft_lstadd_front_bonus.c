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

#include <stdio.h>
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

int main()
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	char content1[10] = "CONTENT 1";
	char content2[10] = "CONTENT 2";

	lst = (t_list *)malloc(sizeof(t_list) * 5);
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	printf("The result is %s\n", (char *)lst[0].content);
	printf("The result is %s\n", (char *)lst[0].next->content);
	return 0;
}
