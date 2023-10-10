//#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*us;
	size_t		i;

	us = (unsigned char *)s;
	i = 0;
	while (i < n)
		us[i++] = '\0';
}
/*
int	main(void)
{
	char	s[] = "qwertyuiop";
	size_t	n = 1;

	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);
}*/
