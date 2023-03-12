#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	swap = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
int	main(void)
{
	int	arrayt[] = {4, 2, 6, 3, 1};
	int sizet = 5;

	ft_sort_int_tab(arrayt, sizet);

	int i = 0;
	while(i < sizet)
	{
		printf("%d\n", arrayt[i]);
		i++;
	}
}
*/
