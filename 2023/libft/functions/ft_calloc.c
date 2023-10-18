//#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*us;
	size_t			i;

	us = (unsigned char *)s;
	i = 0;
	while (i < n)
		us[i++] = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);	
}
/*
int	main(void)
{
	void		*ptr;
	size_t		nmemb = 3;
	size_t		size = 2;
	char		*p;

	ptr = ft_calloc(nmemb, size);
	p = ptr;
	printf("%s\n", p);
	return (0);
}*/
