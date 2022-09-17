/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_six_or_more.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:06:02 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/17 05:21:45 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_split_stack_one(int **stack_s, int **stack_d, int len )
{
	int	i;

	i = 0;
	while (ft_check_int(stack_s, (len - i), (len / 27) * 9, len))
	{
		ft_split_stack_one_b(stack_s, stack_d, len, i);
		i++;
	}
	while (ft_check_int(stack_s, (len - i), 1, (len / 27) * 9))
	{
		ft_pb(stack_s, stack_d, len);
		i++;
	}
}

void	ft_split_stack_two(int **stack_s, int **stack_d, int len, int split)
{
	static int	i = 0;
	int			box[2];

	box[1] = split;
	while (ft_check_int(stack_s, len - i, (len / 27) * split, len))
	{
		box[0] = i;
		ft_split_two_b(stack_s, stack_d, len, box);
		i++;
	}
	while (stack_d[len - (len - i) - 1][1] <= (len / 27) * (split + 3))
		ft_rra(stack_d, len, 1);
	while (ft_check_int(stack_s, len - i, ((len / 27) * \
		(split - 3)), (len / 27) * split))
	{
		box[0] = i;
		ft_split_two_c(stack_s, stack_d, len, box);
		i++;
	}
}

void	ft_split_stack_three(int **stack_s, int **stack_d, int len, int split)
{
	static int	i = 0;
	int			box[2];

	box[1] = split;
	while (ft_check_int(stack_s, len - i, (len / 27) * split, len))
	{
		box[0] = i;
		ft_split_three_b(stack_s, stack_d, len, box);
		i++;
	}
	while (stack_d[len - (len - i) - 1][1] <= (len / 27) * (split + 1))
		ft_rrb(stack_d, len, 1);
	while (ft_check_int(stack_s, len - i, ((len / 27) * \
		 (split - 1)), (len / 27) * split))
	{
		box[0] = i;
		ft_split_three_c(stack_s, stack_d, len, box);
		i++;
	}
}

void	ft_do_sort_one(int **stack_a, int **stack_b, int len)
{
	ft_split_stack_one(stack_a, stack_b, len);
	ft_split_stack_two(stack_b, stack_a, len, 21);
	ft_split_stack_two(stack_b, stack_a, len, 12);
	ft_split_stack_two(stack_b, stack_a, len, 3);
	ft_split_stack_three(stack_a, stack_b, len, 25);
	ft_split_stack_three(stack_a, stack_b, len, 23);
	ft_split_stack_three(stack_a, stack_b, len, 21);
	ft_split_stack_three(stack_a, stack_b, len, 19);
	ft_split_stack_three(stack_a, stack_b, len, 17);
	ft_split_stack_three(stack_a, stack_b, len, 15);
	ft_split_stack_three(stack_a, stack_b, len, 13);
	ft_split_stack_three(stack_a, stack_b, len, 11);
	ft_split_stack_three(stack_a, stack_b, len, 9);
	ft_split_stack_three(stack_a, stack_b, len, 7);
	ft_split_stack_three(stack_a, stack_b, len, 4);
	ft_split_stack_three(stack_a, stack_b, len, 1);
	ft_do_sort_one_b(stack_a, stack_b, len);
}

void	ft_sort_stack(int **stack_a, int **stack_b, int len)
{
	if (ft_check_sort(stack_a, len, 1))
		return ;
	if (len > 100)
		ft_do_sort_one(stack_a, stack_b, len);
	else if (len >= 6)
		ft_do_sort_new(stack_a, stack_b, len);
	else if (len == 5)
		ft_do_sort_two(stack_a, stack_b, len);
	else
		ft_do_sort_three(stack_a, stack_b, len);
}
