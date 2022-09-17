/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:59:56 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/15 18:00:05 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_rrr(int **stack_a, int **stack_b, int len)
{
	ft_rrb(stack_b, len, 0);
	ft_rra(stack_a, len, 0);
	write(1, "rrr\n", 4);
}
