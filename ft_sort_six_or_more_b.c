/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_six_or_more_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 05:31:00 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/17 05:31:04 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_split_stack_one_b(int **stack_s, int **stack_d, int len, int i)
{
	int	f;
	int	e;

	f = 0;
	e = 0;
	while (stack_s[f][1] < (len / 27) * 9)
		f++;
	while (stack_s[len - i - e - 1][1] < (len / 27) * 9)
		e++;
	if (f <= e)
		while (stack_s[0][1] < (len / 27) * 9)
			ft_ra(stack_s, len, 1);
	else
		while (stack_s[0][1] < (len / 27) * 9)
			ft_rra(stack_s, len, 1);
	if (stack_s[0][1] >= (len / 27) * 18)
	{
		ft_pb(stack_s, stack_d, len);
		if (stack_d[1][0] == 1)
			ft_rb(stack_d, len, 1);
	}
	else
		ft_pb(stack_s, stack_d, len);
}

void	ft_split_two_b(int **stack_s, int **stack_d, int len, int *i)
{
	int	f;
	int	e;

	f = 0;
	e = 0;
	while (stack_s[f][1] < (len / 27) * i[1])
		f++;
	while (stack_s[len - i[0] - e - 1][1] < (len / 27) * i[1])
		e++;
	if (f <= e)
		while (stack_s[0][1] < (len / 27) * i[1])
			ft_rb(stack_s, len, 1);
	else
		while (stack_s[0][1] < (len / 27) * i[1])
			ft_rrb(stack_s, len, 1);
	if (stack_s[0][1] > (len / 27) * (i[1] + 3))
		ft_pa(stack_s, stack_d, len);
	else
	{
		ft_pa(stack_s, stack_d, len);
		if (stack_d[1][0] == 1)
			ft_ra(stack_d, len, 1);
	}
}

void	ft_split_two_c(int **stack_s, int **stack_d, int len, int *i)
{
	int	f;
	int	e;

	f = 0;
	e = 0;
	while (stack_s[f][1] < (len / 27) * (i[1] - 3))
		f++;
	while (stack_s[len - i[0] - e - 1][1] < (len / 27) * (i[1] - 3))
		e++;
	if (f <= e)
		while (stack_s[0][1] < (len / 27) * (i[1] - 3))
			ft_rb(stack_s, len, 1);
	else
		while (stack_s[0][1] < (len / 27) * (i[1] - 3))
			ft_rrb(stack_s, len, 1);
	ft_pa(stack_s, stack_d, len);
}

void	ft_split_three_b(int **stack_s, int **stack_d, int len, int *i)
{
	int	f;
	int	e;

	f = 0;
	e = 0;
	while (stack_s[f][1] < (len / 27) * i[1])
		f++;
	while (stack_s[len - i[0] - e - 1][1] < (len / 27) * i[1])
		e++;
	if (f <= e)
		while (stack_s[0][1] < (len / 27) * i[1])
			ft_ra(stack_s, len, 1);
	else
		while (stack_s[0][1] < (len / 27) * i[1])
			ft_rra(stack_s, len, 1);
	if (stack_s[0][1] > (len / 27) * (i[1] + 1))
		ft_pb(stack_s, stack_d, len);
	else
	{
		ft_pb(stack_s, stack_d, len);
		if (stack_d[1][0] == 1)
			ft_rb(stack_d, len, 1);
	}
}

void	ft_split_three_c(int **stack_s, int **stack_d, int len, int *i)
{
	int	f;
	int	e;

	f = 0;
	e = 0;
	while (stack_s[f][1] < (len / 27) * (i[1] - 1))
		f++;
	while (stack_s[len - i[0] - e - 1][1] < (len / 27) * (i[1] - 1))
		e++;
	if (f <= e)
		while (stack_s[0][1] < (len / 27) * (i[1] - 1))
			ft_ra(stack_s, len, 1);
	else
		while (stack_s[0][1] < (len / 27) * (i[1] - 1))
			ft_rra(stack_s, len, 1);
	ft_pb(stack_s, stack_d, len);
}
