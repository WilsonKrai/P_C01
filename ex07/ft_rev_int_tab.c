/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:45:31 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/09 17:48:00 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>//

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	
	i = 0;
	swap = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;	
	}
}
/*
int main(void)
{
	int arrayt[] = {1, 2, 3, 4, 5, 6};
	int sizea = 6;

	ft_rev_int_tab(arrayt, sizea);
	int i = 0;
	while (i < sizea)
	{
		printf("%d\n", arrayt[i]);
		i++;
	}	
}
*/
