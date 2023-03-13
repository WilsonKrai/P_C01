/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:15:00 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 14:02:40 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rdiv;
	int	rmod;

	rdiv = *a / *b;
	rmod = *a % *b;
	*a = rdiv;
	*b = rmod;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 25;
	y = 10;
	printf("%d\n", x);
	printf("%d\n", y);
	ft_ultimate_div_mod(&x, &y);
}
*/
