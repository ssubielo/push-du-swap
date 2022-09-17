/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:07:33 by ssubielo          #+#    #+#             */
/*   Updated: 2022/04/15 18:19:45 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = 0;
	if ((nmemb >= 65535 && size >= 65535))
		return (NULL);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	ft_bzero(str, size * nmemb);
	return (str);
}
