/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:23:24 by ssubielo          #+#    #+#             */
/*   Updated: 2022/04/16 12:05:08 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap_utils.h"

static int	ft_cnt_str(char const *s, char c)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || !s[i])
				value++;
		}
		if (s[i] == c)
			i++;
	}
	return (value);
}

static int	*ft_cnt_chr(char const *s, char c, int *i)
{
	while (s[i[0]] == c && s[i[0]])
		i[0]++;
	while (s[i[0]] != c && s[i[0]])
	{
		i[2]++;
		i[0]++;
	}
	return (i);
}

static char	**ft_ini_split(char **str, char const *s, char c, int *j)
{
	int	i;
	int	nb_str;
	int	nb_chr;

	i = 0;
	nb_chr = 0;
	nb_str = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			str[nb_str][nb_chr++] = s[i++];
			if (s[i] == c || !s[i])
				nb_str++;
		}
		if (s[i])
			i++;
		nb_chr = 0;
	}
	str[nb_str] = 0;
	free(j);
	return (str);
}

static char	**ft_chaos(char **str, const char *s, int *j)
{
	int	i;

	i = 0;
	str = ft_calloc(sizeof(char *), 2);
	str[0] = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	while (s[i])
	{
		str[0][i] = s[i];
		i++;
	}
	free(j);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		*i;

	if (!s)
		return (NULL);
	i = ft_calloc(sizeof(int), 3);
	if (!i)
		return (NULL);
	str = 0;
	if (!c && s[0])
		return (ft_chaos(str, s, i));
	str = ft_calloc(sizeof(char *), ft_cnt_str(s, c) + 1);
	if (!str)
		return (NULL);
	while (s[i[0]])
	{
		i[2] = 0;
		ft_cnt_chr(s, c, i);
		if (i[2] == 0)
			break ;
		str[i[1]] = ft_calloc(sizeof(char), i[2] + 1);
		if (!str[i[1]++])
			return (NULL);
	}
	return (ft_ini_split(str, s, c, i));
}
