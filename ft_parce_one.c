/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:30:06 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/20 00:53:20 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

int	ft_check_strvalue_b(int stat, int i, long int value)
{
	if (stat == 1)
		value = -value;
	if (value < -2147483648 || value > 2147483647 || i > 12)
		return (0);
	return (1);
}

int	ft_check_strvalue(const char *nptr)
{
	int			i;
	int			stat;
	long int	value;

	value = 0;
	i = 0;
	stat = 0;
	if (nptr[i] == '-')
	{
		i++;
		stat = 1;
	}
	if (nptr[i--] == 0)
		return (0);
	while (nptr[++i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			value = value * 10;
			value = value + nptr[i] - '0';
		}
		else
			return (0);
	}
	return (ft_check_strvalue_b(stat, i, value));
}

int	ft_strvalue_b(int stat, long int value)
{
	if (stat == 1)
		value = -value;
	return (value);
}

int	ft_strvalue(const char *nptr)
{
	int			i;
	long int	value;
	int			stat;

	value = 0;
	i = 0;
	stat = 0;
	if (nptr[i] == '-')
	{
		stat = 1;
		i++;
	}
	if (nptr[i--] == 0)
		return (0);
	while (nptr[++i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			value = value * 10;
			value = value + nptr[i] - '0';
		}
		else
			return (0);
	}
	return (ft_strvalue_b(stat, value));
}
