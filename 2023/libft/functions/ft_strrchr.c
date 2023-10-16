//#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l > 0)
	{
		if (s[l] == c)
			return ((char *)s + l);
		l--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s[] = "qwertyuiopqwertyuiop";
	int			c = 'q';

	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/
