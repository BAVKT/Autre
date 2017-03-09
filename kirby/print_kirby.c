/*
** Need un ptit makefile
** Et d'autres "oeuvres"
*/
#include "libft.h"

void	ft_putcharcolor(char c, char *color)
{
	ft_putstr(color);
	ft_putchar(c);
	ft_putstr(RESET);
}

/*
** Affiche un Kawaii kirbyyy
** Image : 	http://www.minecraftpixelarttemplates.com/2012/08/kirby.html
*/
void	trace_kirby()
{
	//Lignes avant dessin
	ft_putendl("                  ");
	ft_putendl("                  ");
	ft_putchar('\n');
	//ligne 1
	ft_putstr("       ");
	ft_putstrcolor("       ", WHITE_BK_RED_FG);
	ft_putstr("       ");
	ft_putchar('\n');
	//ligne 2
	ft_putstr("     ");
	ft_putstrcolor("  ", WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("     ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("  ", WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 3
	ft_putstr("    ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("         ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 4
	ft_putstr("   ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("           ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 5
	ft_putstr("   ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("            ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 6
	ft_putstr("  ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("        ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("   ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 7
	ft_putchar(' ');
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("        ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("    ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 8
	ft_putchar(' ');
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("         ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("    ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 9
	ft_putchar(' ');
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("     ", MAGENTA_BK_WHITE_FG);
	ft_putstrcolor("  ", RED_BK_WHITE_FG);
	ft_putstrcolor("     ", MAGENTA_BK_WHITE_FG);
	ft_putstrcolor("  ", RED_BK_WHITE_FG);
	ft_putstrcolor("  ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 10
	ft_putchar(' ');
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("   ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("        ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("   ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 11
	ft_putstr("  ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putcharcolor(' ', MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("     ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("    ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 12
	ft_putstr("   ");
	ft_putstrcolor("  ", WHITE_BK_RED_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("         ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("  ", WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 13
	ft_putstr("    ");
	ft_putstrcolor("  ", WHITE_BK_RED_FG);
	ft_putstrcolor("  ", RED_BK_WHITE_FG);
	ft_putstrcolor("      ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', RED_BK_WHITE_FG);
	ft_putstrcolor("  ", WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 14
	ft_putstr("   ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("  ", RED_BK_WHITE_FG);
	ft_putstrcolor("         ", WHITE_BK_RED_FG);
	ft_putstrcolor("  ", RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 15
	ft_putstr("  ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("     ", RED_BK_WHITE_FG);
	ft_putstrcolor("      ", WHITE_BK_RED_FG);
	ft_putstrcolor("    ", RED_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putchar('\n');
	//ligne 16
	ft_putstr("   ");
	ft_putstrcolor("     ", WHITE_BK_RED_FG);
	ft_putstr("     ");
	ft_putstrcolor("     ", WHITE_BK_RED_FG);

	//lignes apres dessin
	ft_putendl("                  ");
	ft_putendl("                  ");

}


void	trace_dubloadz()
{
	ft_putstrcolor("En cours de construction.\n", RED);
	return ;
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstrcolor("usage : ./a.out nb\n Where nb is :\n 1 = Kirby\n 2 = Dubloadz\n ", CYAN);
		return (0);
	}
	if (ft_strchr(av[1], '1') != NULL)
		trace_kirby();
	else if (ft_strchr(av[1], '2') != NULL && ft_strlen(av[1]) == 1)
		trace_dubloadz();
	else
		ft_putstrcolor("usage : ./Draw nb\nWhere nb is :\n1 = Kirby\n2 = Dubloadz", CYAN);
	return (0);
}