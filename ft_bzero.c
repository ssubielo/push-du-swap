/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:56:25 by ssubielo          #+#    #+#             */
/*   Updated: 2022/04/15 18:17:53 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}