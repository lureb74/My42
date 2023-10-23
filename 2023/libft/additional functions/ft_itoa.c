#include <stdlib.h>
#include <stdio.h>

static int	count(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		ncopy;
	int		ncount;
	char	*r;

	ncount = count(n);
//	while (ncount && ++c < 10)
//		ncount /= 10;
	printf("%d\n", ncount);
	if (n < 0)
		ncount++;
	r = (char *)malloc((ncount + 1) * sizeof(char));
	if (!r)
		return (NULL);
	ncopy = n;
//	r[ncount] = '\0';
	while (--ncount >= 0)
	{
		r[ncount] = ncopy % 10 + 48;
		ncopy /= 10;
	}
	if (n < 0)
		r[ncount] = '-';
	r[count(n)] = '\0';
	return (r);
}

int main(void)
{
	int		i = 2147483647;
	char    *r;

	r = ft_itoa(i);
	printf("%s\n", r);
	return (0);
}
