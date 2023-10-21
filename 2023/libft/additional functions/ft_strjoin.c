//#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		l1;
	int		l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	new = (char *)malloc(l1 + l2);
	if (!new)
		return (NULL);
	new = (char *)s1;
	while (*s2)
		new[l1++] = *s2++;
	new[l1] = '\0';
	return (new);
}
/*
int	main()
{
	const char		s1[] = "bimbo";
	const char		s2[] = "minchia!";
	char			*r;

	r = ft_strjoin(s1, s2);
	printf("New string:\n%s\n", r);
	return (0);
}*/
