//#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	sub = malloc(len);
	if (!sub)
		return (NULL);
	i = 0;
	start -= 1;
	while (s && len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	const char		s[] = "bimbominchia!";
	unsigned int	start = 6;
	size_t			len = 7;
	char			*r;

	r = ft_substr(s, start, len);
	printf("Substring:\n%s\n", r);
	return (0);
}*/
