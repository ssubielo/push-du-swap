/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:52:45 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/19 22:56:47 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_do_sort_new_b(int **stack_a, int **stack_b, int len)
{
	int	i;
	int	j;

	i = 1;
	while (i <= len)
	{
		j = 0;
		while (stack_a[j][1] != i)
			j++;
		if (j < (len - i) / 2)
			while (stack_a[0][1] != i)
				ft_ra(stack_a, len, 1);
		else
			while (stack_a[0][1] != i)
				ft_rra(stack_a, len, 1);
		ft_pb(stack_a, stack_b, len);
		i++;
	}
	while (i-- > 0)
		ft_pa(stack_b, stack_a, len);
}

void	ft_do_sort_new(int **stack_a, int **stack_b, int len)
{
	ft_split_stack_one(stack_a, stack_b, len);
	ft_split_stack_two(stack_b, stack_a, len, 21);
	ft_split_stack_two(stack_b, stack_a, len, 12);
	ft_split_stack_two(stack_b, stack_a, len, 3);
	ft_do_sort_new_b(stack_a, stack_b, len);
}
