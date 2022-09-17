/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_six_or_more_c.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 05:35:39 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/17 05:35:41 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_do_sort_one_b(int **stack_a, int **stack_b, int len)
{
	int	i;
	int	j;

	i = len;
	while (i >= 1)
	{
		j = 0;
		while (stack_b[j][1] != i)
			j++;
		if (j < (i) / 2)
			while (stack_b[0][1] != i)
				ft_rb(stack_b, len, 1);
		else
			while (stack_b[0][1] != i)
				ft_rrb(stack_b, len, 1);
		ft_pa(stack_b, stack_a, len);
		i--;
	}
}
