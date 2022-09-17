/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_two_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 05:26:40 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/17 05:26:42 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_split_arg_b(char *str_temp)
{
	free(str_temp);
	write (1, "Error\n", 6);
	exit(0);
}

char	**ft_split_arg_c(char **str, char *str_temp)
{
	str = ft_split_and_check_arg(str_temp);
	if (!(str))
		exit(0);
	return (str);
}
