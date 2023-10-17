//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		src += n;
		dest += n;
		while (n--)
			*(unsigned char *)--dest = *(unsigned char *)--src;
	}
	else
		while (n--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest);
}
/*
int	main(void)
{
	char		dest[15] = "dindondan";
	const char	src[11] = "qwertyuiop";
	size_t		n = 6;

	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
