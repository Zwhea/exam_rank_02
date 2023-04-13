#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char 	*dup;
	int 	i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = malloc((len + 1) * sizeof(char *));
	if (dup != NULL)
	{
		while (src[i])
		{
			dup[i] =  src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
