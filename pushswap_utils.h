/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssubielo <ssubielo@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:24:07 by ssubielo          #+#    #+#             */
/*   Updated: 2022/06/20 00:54:01 by ssubielo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSHSWAP_UTILS_H
# define PUSHSWAP_UTILS_H
# include <unistd.h>
# include <stdlib.h>

void	ft_do_sort_one(int **stack_a, int **stack_b, int len);
void	ft_do_sort_two(int **stack_a, int **stack_b, int len);
void	ft_split_stack_one_b(int **stack_s, int **stack_d, int len, int i);
void	ft_split_two_b(int **stack_s, int **stack_d, int len, int *i);
void	ft_split_two_c(int **stack_s, int **stack_d, int len, int *i);
void	ft_split_three_b(int **stack_s, int **stack_d, int len, int *i);
void	ft_split_three_c(int **stack_s, int **stack_d, int len, int *i);
void	ft_do_sort_one_b(int **stack_a, int **stack_b, int len);
void	ft_split_arg_b(char *str_temp);
char	**ft_split_arg_c(char **str, char *str_temp);
void	ft_do_sort_three(int **stack_a, int **stack_b, int len);
void	ft_do_sort_new_b(int **stack_a, int **stack_b, int len);
void	ft_do_sort_new(int **stack_a, int **stack_b, int len);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putstr(char *s);
void	ft_split_stack_one(int **stack_s, int **stack_d, int len );
void	ft_split_stack_two(int **stack_s, int **stack_d, int len, int split);
void	ft_split_stack_three(int **stack_s, int **stack_d, int len, int split);
void	ft_ra(int **stack_a, int len, int stat);
void	ft_rb(int **stack_b, int len, int stat);
void	ft_rr(int **stack_a, int **stack_b, int len);
void	ft_rra(int **stack_a, int len, int stat);
void	ft_rrb(int **stack_b, int len, int stat);
void	ft_sa(int **stack_a, int len, int stat);
void	ft_sb(int **stack_b, int len, int stat);
void	ft_ss(int **stack_a, int **stack_b, int len);
void	ft_pb(int **stack_a, int **stack_b, int len);
void	ft_pa(int **stack_b, int **stack_a, int len);
void	ft_rrr(int **stack_a, int **stack_b, int len);
int		ft_check_strvalue(const char *nptr);
int		ft_strvalue(const char *nptr);
char	**ft_split_arg(int ac, int j, int temp, char **av);
int		**ft_post_sort(int **stack_a, int len);
int		**ft_setup_stack_a(int *len, char **str);
int		**ft_setup_stack_b(int len);
int		ft_check_sort(int **stack_a, int len, int start);
int		ft_check_int(int **stack, int len, int start, int end);
int		ft_free_all_stack(int **stack, int len);
int		ft_free_all_str(char **str);
char	**ft_split_and_check_str(char **av);
char	**ft_split_and_check_arg(char *str_temp);
int		ft_check_stack(int **stack_a, int len);
int		ft_check_arg(char **str);
void	ft_sort_stack(int **stack_a, int **stack_b, int len);

#endif
