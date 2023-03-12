/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:35:08 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/09 15:06:23 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	t1;
	int	t2;
	int	divisao;
	int	modulo;

	t1 = 5;
	t2 = 10;
	divisao = 0;
	modulo = 0;
	ft_div_mod(t1, t2, &divisao, &modulo);

	printf("%d\n%d", divisao, modulo);
	return (0);
}
*/
