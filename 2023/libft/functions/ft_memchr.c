//#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t			i;

	alts = (unsigned char *)s;
	i = 0;
	while (i++ <= n)
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char	s[21] = "qwertyuiopqwertyuiop";
	const char	c = 'e';
	size_t		n = 20;
	char		*r;

	r = ft_memchr(s, c, n);
	printf("La stringa dopo '%c' è: %s\n", c, r);
	return (0);
}*/
