/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:48:44 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/15 20:48:54 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_do_sort_two(int **stack_a, int **stack_b, int len)
{
	int	i[2];

	i[0] = 0;
	while (++i[0] < 3)
	{
		i[1] = 0;
		while (stack_a[i[1]][1] != i[0])
			i[1]++;
		if (i[1] > 2)
			while (stack_a[0][1] != i[0])
				ft_rra(stack_a, len, 1);
		else
			while (stack_a[0][1] != i[0])
				ft_ra(stack_a, len, 1);
		ft_pb(stack_a, stack_b, len);
	}
	while (!(ft_check_sort(stack_a, len, 3)))
	{
		if (stack_a[0][1] == stack_a[1][1] + 1)
			ft_sa(stack_a, len, 1);
		else
			ft_rra(stack_a, len, 1);
	}
	ft_pa(stack_a, stack_b, len);
	ft_pa(stack_a, stack_b, len);
}

void	ft_do_sort_three(int **stack_a, int **stack_b, int len)
{
	(void)stack_b;
	while (!(ft_check_sort(stack_a, len, 1)))
	{
		if (stack_a[0][1] == stack_a[1][1] + 1)
			ft_sa(stack_a, len, 1);
		else if (stack_a[0][1] > stack_a[1][1] && (stack_a[0][1] != len ||
			stack_a[1][1] != 1))
			ft_sa(stack_a, len, 1);
		else
			ft_rra(stack_a, len, 1);
	}
}
