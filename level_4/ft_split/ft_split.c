#include <stdlib.h>

static char	*ft_strndup(char *s1, int size)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (dup)
	{
		while (i < size && s1[i])
		{
			dup[i] = s1[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;
	int	wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **split = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			split[k] = ft_strndup(&str[j], i - j);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}

#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	char **split;

	if (ac == 2)
	{
		i = 0;
		split = ft_split(av[1]);
		while (split[i])
		{
			printf("%s\n", split[i]);
			i++;
		}
	}
	return (0);
}