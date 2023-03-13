/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:53:46 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 14:14:51 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

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
