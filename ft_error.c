/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:30:16 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/15 17:30:17 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

char	**ft_split_and_check_str(char **av)
{
	char	**str;

	str = ft_split(av[1], ' ');
	if (!(str))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	if (!(ft_check_arg(str)))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	return (str);
}

char	**ft_split_and_check_arg(char *str_temp)
{
	char	**str;

	str = ft_split(str_temp, ' ');
	if (!(str))
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	free (str_temp);
	if (!(ft_check_arg(str)))
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	return (str);
}

int	ft_check_stack(int **stack_a, int len)
{
	int	i;
	int	j;

	i = -1;
	while (++i < len)
	{
		j = -1;
		while (++j < len)
		{
			if (stack_a[j][2] == stack_a[i][2] && j != i)
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
	}
	return (1);
}

int	ft_check_arg(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_check_strvalue(str[i]))
			return (ft_free_all_str(str));
	}
	return (1);
}
