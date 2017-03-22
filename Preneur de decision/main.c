#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 3 || argc < 2)
	{
		ft_putstrcolor("usage: ./a.out $RANDOM fume/joue/mange/...", CYAN);
		return(0);
	}
	i = atoi(argv[1]);
	i = i << 4 | ((i * 44) - (i * i * i) * 2);
	i -= (rand()*666+12%7)/(i*42);
	str = ft_strnew(100);
	str = "On ";
	str = ft_strjoin(str, argv[2]);
	if (i < 0)
		ft_putstrcolor(str, GREEN_BOLD);
	else
	{
		str = ft_strjoin(str, " PAS");
		ft_putstrcolor(str, RED_BOLD);
	}
	return (0);
}