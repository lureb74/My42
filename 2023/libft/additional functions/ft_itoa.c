#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//char *ft_itoa(int n)
void    ft_itoa(int n)
{
    int     c;
    int     ncopy;
//  char    *r;

    c = 0;
    ncopy = n;
    while (ncopy && ++c < 10)
        ncopy /= 10;
//  printf("%d\n", c);
         
}

int main(void)
{
    int      i = -2147483648;
//    char    *r;

    ft_itoa(i);
//    printf("%s\n", r);
    return (0);
}
