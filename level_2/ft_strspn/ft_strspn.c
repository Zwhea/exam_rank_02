#include <string.h>
#include <stdbool.h>

bool ft_strchr(const char *accept, int char_s)
{
	int	i;

	i = 0;
	while (accept[i] != '\0')
	{
		if (accept[i] == char_s)
			return (true);
		i++;
	}
	return (false);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == false)
			break;
		i++;
	}
	return (i);
}
