#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*array;
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (start < end)
		size = end - start;
	else if (start > end)
		size = start - end;
	array = malloc((size + 1) * sizeof(int *));
	if (!array)
		return (NULL);
	while (i <= size)
	{
		if (start < end)
		{
			array[i] = end;
			end--;
			i++;
		}
		else
		{
			array[i] = end;
			end++;
			i++;
		}
	}
	return (array);
}
