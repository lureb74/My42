//#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (s < d)
		while (++i <= n)
			d[n - i] = s[n - i];
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	char		dest[15] = "";
	const char	src[11] = "qwertyuiop";
	size_t		n = 6;

	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
