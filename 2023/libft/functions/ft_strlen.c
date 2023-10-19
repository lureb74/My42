//#include<libft.h>
//#include<string.h>
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	str[] = "Questa stringa e' moooooooooooooolto lunga";
	size_t		r;

	r = ft_strlen(str);
	printf("FT:\n%ld\n", r);
	return (0);
}*/
/*
int	main(void)
{
	const char	str[] = "Questa stringa e' moooooooooooooolto lunga";
	size_t		r;

	r = strlen(str);
	printf("ORIGINAL:\n%ld\n", r);
	return (0);
}*/
