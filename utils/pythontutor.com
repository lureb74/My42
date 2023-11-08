#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
} t_list;

int main()
{
    t_list    *lst;
    t_list    *node1;
    t_list    *node2;
    t_list    *node3;
    t_list    *node4;
    t_list    *node5;
    char    content1[10] = "CONTENT 1";
    char    content2[10] = "CONTENT 2";
    char    content3[10] = "CONTENT 3";
    char    content4[10] = "CONTENT 4";
    char    content5[10] = "CONTENT 5";
    int        r;

    lst = (t_list *)malloc(sizeof(t_list) * 5);
    node1 = ft_lstnew((void *)content1);
    node2 = ft_lstnew((void *)content2);
    node3 = ft_lstnew((void *)content3);
    node4 = ft_lstnew((void *)content4);
    node5 = ft_lstnew((void *)content5);
    ft_lstadd_front(&lst, node1);
    ft_lstadd_front(&lst, node2);
    ft_lstadd_front(&lst, node3);
    ft_lstadd_front(&lst, node4);
    ft_lstadd_front(&lst, node5);
    r = ft_lstsize(lst);
    printf("%d\n", r);
    while (r > 0)
    {
        printf("The result is %s\n", (char *)lst[0].content);
        lst = lst->next;
        r--;
    }
    return 0;
}

t_list    *ft_lstnew(void *content)
{
    t_list    *pnt;

    pnt = (t_list *)malloc(sizeof(t_list));
    if (!pnt)
        return (NULL);
    pnt->content = content;
    pnt->next = NULL;
    return (pnt);
}

void    ft_lstadd_front(t_list **lst, t_list *new)
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

int    ft_lstsize(t_list *lst)
{
    int    i;

    if (!lst)
        return (0);
    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
