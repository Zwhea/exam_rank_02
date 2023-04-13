#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*array;
	int size;
	int	i;

	size = 0;
	if (start > end)
		size = (start - end);
	else if (start < end)
		size = (end - start);
	array = malloc((size + 1) * sizeof(int *));
	if (!array)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		if (start > end)
		{
			array[i] = start;
			start--;
			i++;
		}
		else
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	return (array);
}
