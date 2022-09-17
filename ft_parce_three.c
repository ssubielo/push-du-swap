/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:03:39 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/15 18:03:45 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

int	**ft_setup_stack_b(int len)
{
	int	**stack_b;
	int	i;

	i = -1;
	stack_b = ft_calloc(sizeof(int *), len);
	if (!(stack_b))
		return (NULL);
	while (++i < len)
	{
		stack_b[i] = ft_calloc(sizeof(int), 3);
		if (!(stack_b[i]))
		{
			free(stack_b);
			return (NULL);
		}
	}
	return (stack_b);
}

int	ft_check_sort(int **stack_a, int len, int start)
{
	int	i;

	i = start;
	while (i <= len)
	{
		if (stack_a[i - start][1] != i)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_int(int **stack, int len, int start, int end)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (stack[i][1] > start && stack[i][1] <= end)
			return (1);
		i++;
	}
	return (0);
}
