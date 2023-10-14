//#include "libft.h"
//#include <bsd/string.h>
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		l;
	size_t		i;

	l = ft_strlen(src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*
int	main(void)
{
	char		dst[] = "";
	const char	src[] = "Questa stringa e' stata copiata per intero";
	size_t		r;
	size_t		size = 31;

	r = ft_strlcpy(dst, src, size);
	printf("FT:\nValue: %ld\n", r);
	puts(dst);
	if(r >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}*/
/*
int	main(void)
{
	char		dst[] = "";
	const char	src[] = "Questa stringa e' stata copiata per intero";
	size_t		r;
	size_t		size = 31;

	r = strlcpy(dst, src, size);
	printf("ORIGINAL:\nValue: %ld\n", r);
	puts(dst);
	if(r >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}*/
