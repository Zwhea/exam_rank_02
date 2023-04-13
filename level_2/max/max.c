#include <string.h>

int		max(int* tab, unsigned int len)
{
	size_t	i;
	int		result;

	i = 0;
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
