/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:41:45 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/15 17:41:53 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_sa(int **stack_a, int len, int stat)
{
	int	*swap;

	(void)len;
	if (stack_a[0][0] && stack_a[1][0])
	{
		swap = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = swap;
		if (stat == 1)
			write(1, "sa\n", 3);
	}
}

void	ft_sb(int **stack_b, int len, int stat)
{
	int	*swap;

	(void)len;
	if (stack_b[0][0] && stack_b[1][0])
	{
		swap = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = swap;
		if (stat == 1)
			write(1, "sb\n", 3);
	}
}

void	ft_ss(int **stack_a, int **stack_b, int len)
{
	ft_sa(stack_a, len, 0);
	ft_sb(stack_b, len, 0);
	write(1, "ss\n", 3);
}

void	ft_pb(int **stack_a, int **stack_b, int len)
{
	int	i;
	int	*swap;
	int	*swap_swap;

	i = 0;
	if (stack_a[0][0] == 1)
	{
		swap = stack_a[0];
		stack_a[0] = stack_b[len - 1];
		while (i < len)
		{
			swap_swap = stack_b[i];
			stack_b[i++] = swap;
			swap = swap_swap;
		}
		i--;
		write(1, "pb\n", 3);
		while (i >= 0)
		{
			swap_swap = stack_a[i];
			stack_a[i--] = swap;
			swap = swap_swap;
		}
	}
}

void	ft_pa(int **stack_b, int **stack_a, int len)
{
	int	i;
	int	*swap;
	int	*swap_swap;

	i = 0;
	if (stack_b[0][0] == 1)
	{
		swap = stack_b[0];
		stack_b[0] = stack_a[len - 1];
		while (i < len)
		{
			swap_swap = stack_a[i];
			stack_a[i++] = swap;
			swap = swap_swap;
		}
		i--;
		write(1, "pa\n", 3);
		while (i >= 0)
		{
			swap_swap = stack_b[i];
			stack_b[i--] = swap;
			swap = swap_swap;
		}
	}
}
