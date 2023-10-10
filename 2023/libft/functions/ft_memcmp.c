//#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*alts1;
	unsigned char	*alts2;

	alts1 = (unsigned char *)s1;
	alts2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*alts1 == *alts2 && *alts1 && *alts1 < n - 1)
	{
		alts1++;
		alts2++;
	}
	return (*alts1 - *alts2);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("Ciao!", "Ciao!", 5));
	printf("%d\n", ft_memcmp("Ciao!", "Bello!", 0));
	printf("%d\n", ft_memcmp("miao!", "Ciao!", -1));
}*/
