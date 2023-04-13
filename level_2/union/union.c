#include <unistd.h>

int check_char(char *s, char c, int position)
{
	int i = 0;
	
	while(i < position)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return  (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	/*étape 1: le but est de concaténer s1 et s2 
	(ex: "bonne" "journée" -> "bonnejournée")*/
	i--;
	while (k <= i)
	{
		if(check_char(s1, s1[k], k) == 1) 
		{
			write (1, &s1[k], 1); 
		}
		k++;
	}
	/*étape 2: désormais on checke les doublons.
	j'envoie ma chaine, le char sur lequel je suis et la position du nouveau charactere a tester
	(ex: boucle 1 -> "bonnejournee" , "b", "1" 
	si je trouve plus d'une fois le charactere sur lequel je suis avant d'atteindre la position actuelle,
	j'ai un doublon
	ex: boucle avec doublon -> "bonnejournee, "n" , "9"*/
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write (1, "\n",1);
	return (0);
}