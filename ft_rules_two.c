/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:43:17 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/15 17:43:27 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_ra(int **stack_a, int len, int stat)
{
	int	i;
	int	*swap;
	int	*swap_swap;

	i = len - 1;
	if (stack_a[0][0] == 1 && stack_a[1][0] == 1)
	{
		while (stack_a[i][0] == 0)
			i--;
		len = i;
		while (i >= 0 && stack_a[i][0] == 1)
		{
			swap_swap = stack_a[i];
			stack_a[i] = swap;
			swap = swap_swap;
			i--;
		}
		stack_a[len] = swap;
	}
	if (stat == 1)
		write(1, "ra\n", 3);
}

void	ft_rb(int **stack_b, int len, int stat)
{
	int	i;
	int	*swap;
	int	*swap_swap;

	i = len - 1;
	if (stack_b[0][0] == 1 && stack_b[1][0] == 1)
	{
		while (stack_b[i][0] == 0)
			i--;
		len = i;
		while (i >= 0 && stack_b[i][0] == 1)
		{
			swap_swap = stack_b[i];
			stack_b[i] = swap;
			swap = swap_swap;
			i--;
		}
		stack_b[len] = swap;
	}
	if (stat == 1)
		write(1, "rb\n", 3);
}

void	ft_rr(int **stack_a, int **stack_b, int len)
{
	ft_ra(stack_a, len, 0);
	ft_rb(stack_b, len, 0);
	write(1, "rr\n", 3);
}

void	ft_rra(int **stack_a, int len, int stat)
{
	int	i;
	int	*swap;
	int	*swap_swap;

	i = 0;
	if (stack_a[0][0] == 1 && stack_a[1][0] == 1)
	{
		while (i < len && stack_a[i][0] == 1)
		{
			swap_swap = stack_a[i];
			stack_a[i] = swap;
			swap = swap_swap;
			i++;
		}
		stack_a[0] = swap;
	}
	if (stat == 1)
		write(1, "rra\n", 4);
}

void	ft_rrb(int **stack_b, int len, int stat)
{
	int	i;
	int	*swap;
	int	*swap_swap;

	i = 0;
	if (stack_b[0][0] == 1 && stack_b[1][0] == 1)
	{
		while (i < len && stack_b[i][0] == 1)
		{
			swap_swap = stack_b[i];
			stack_b[i] = swap;
			swap = swap_swap;
			i++;
		}
		stack_b[0] = swap;
	}
	if (stat == 1)
		write(1, "rrb\n", 4);
}
