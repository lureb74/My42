//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
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
