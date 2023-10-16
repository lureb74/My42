//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t			i;

	alts = (unsigned char *)s;
	i = 0;
	while (i++ <= n)
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
	return (0);
}
/*
int	main(void)
{
	const char	s[21] = "qwertyuiopqwertyuiop";
	const char	c = 'p';
	size_t		n = 21;
	char		*rft;
	char		*ror;

	rft = ft_memchr(s, c, n);
	printf("FT:\nLa stringa dopo '%c' è: %s\n", c, rft);
	ror = ft_memchr(s, c, n);
	printf("ORIGINAL:\nLa stringa dopo '%c' è: %s\n", c, ror);
	return (0);
}*/
