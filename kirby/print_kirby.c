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
	ft_putstr("   ");
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("        ", MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putcharcolor(' ', MAGENTA_BK_WHITE_FG);
	ft_putcharcolor(' ', WHITE_BK_RED_FG);
	ft_putstrcolor("  ", MAGENTA_BK_WHITE_FG);
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

int		main()
{
	trace_kirby();
	return (0);
}