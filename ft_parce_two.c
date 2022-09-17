/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:01:21 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/17 05:22:24 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

char	**ft_split_arg(int ac, int j, int temp, char **av)
{
	char	*str_temp;
	char	**str;
	int		i;

	i = 0;
	str = 0;
	while (++i <= ac - 1)
		temp += ft_strlen(av[i]) + 1;
	str_temp = ft_calloc(sizeof(char), temp + 1);
	if (!(str_temp))
		exit(0);
	i = 0;
	j = 0;
	while (++i <= ac - 1)
	{
		temp = -1;
		if (!av[i][0])
			ft_split_arg_b(str_temp);
		while (av[i][++temp])
			str_temp[j++] = av[i][temp];
		if (i != ac - 1)
			str_temp[j++] = ' ';
	}
	return (ft_split_arg_c(str, str_temp));
}

int	**ft_post_sort(int **stack_a, int len)
{
	int		i;
	int		j;
	long	max_value[2];

	i = 0;
	while (i < len)
	{
		j = 0;
		max_value[0] = -2147483648;
		while (j < len)
		{
			if (stack_a[j][2] >= max_value[0] && !stack_a[j][0])
			{
				max_value[0] = stack_a[j][2];
				max_value[1] = j;
			}
			j++;
		}
		stack_a[max_value[1]][1] = len - i;
		stack_a[max_value[1]][0] = 1;
		i++;
	}
	return (stack_a);
}

int	**ft_setup_stack_a_b(int **stack_a)
{
	free(stack_a);
	return (NULL);
}

int	**ft_setup_stack_a(int *len, char **str)
{
	int	**stack_a;
	int	i;

	i = -1;
	while (str[*len])
		++*len;
	stack_a = ft_calloc(sizeof(int *), *len);
	if (!(stack_a))
		return (NULL);
	while (str[++i])
	{
		stack_a[i] = ft_calloc(sizeof(int), 3);
		if (!(stack_a[i]))
			return (ft_setup_stack_a_b(stack_a));
	}
	i = -1;
	while (str[++i])
		stack_a[i][2] = ft_strvalue(str[i]);
	if (!(ft_check_stack(stack_a, *len)))
	{
		ft_free_all_stack(stack_a, *len);
		return (NULL);
	}
	return (ft_post_sort(stack_a, *len));
}
