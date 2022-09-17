/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:18:22 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/16 01:55:26 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

int	main(int ac, char **av)
{
	char	**str;
	int		**stack_a;
	int		**stack_b;
	int		len;

	if (ac == 2)
		str = ft_split_and_check_str(av);
	else if (ac > 2)
		str = ft_split_arg(ac, 0, 0, av);
	else if (ac < 2)
		return (0);
	len = 0;
	stack_a = ft_setup_stack_a(&len, str);
	if (!stack_a)
		return (ft_free_all_str(str));
	ft_free_all_str(str);
	if (len < 2)
		return (ft_free_all_stack(stack_a, len));
	stack_b = ft_setup_stack_b(len);
	if (!stack_b)
		return (ft_free_all_stack(stack_a, len));
	ft_sort_stack(stack_a, stack_b, len);
	ft_free_all_stack(stack_a, len);
	ft_free_all_stack(stack_b, len);
}
