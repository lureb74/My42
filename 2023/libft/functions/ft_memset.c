//#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*us;
	size_t	i;

	us = s;
	i = 0;
	while (i < n)
		us[i++] = c;
	return (s);
}
/*
int	main(void)
{
	char	s[] = "qwertyuiop";
	int	c = 120;
	size_t	n = 6;

	ft_memset(s, c, n);
	printf("%s\n", s);
	return (0);
}*/
