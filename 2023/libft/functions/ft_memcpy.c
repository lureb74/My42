//#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	char		dest[15];
	const char	src[] = "qwertyuiop";
	size_t		n = 6;

	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
