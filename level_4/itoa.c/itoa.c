#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*result;
	int		len;
	int		n;

	result = NULL;
	len = 0;
	n = nbr;
	if (nbr < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	result = malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	len--;
	while (nbr)
	{
		result[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (result);
}
