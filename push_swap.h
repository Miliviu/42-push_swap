/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:38:36 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/21 09:39:09 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	len;
	int	lena;
	int	lenb;
}		t_data;

void				sa(t_data *glob);
void				sb(t_data *glob);
void				ss(t_data	*glob);
void				pa(t_data *glob);
void				pb(t_data *glob);
void				ra(t_data *glob);
void				rb(t_data *glob);
void				rr(t_data	*glob);
void				rra(t_data *glob);
void				rrb(t_data *glob);
void				rrr(t_data	*glob);
long long int		ft_atoi(const char *s);
int					ft_isdigit(int c);
void				sort_four(t_data	*stacks);
void				sort_five(t_data	*stacks);
void				sort_three(t_data *stacks);
int					small_search(t_data	*stacks);
int					check_solved(t_data glob);
void				map_numbers(t_data	*stacks);
void				sort_long(t_data	*stacks);
t_data				parse_data_spl(char **argv, int argc);
int					check_input_spl(char **argv);
int					find_length(char **argv);
int					main_aux(int argc, char **argv);
int					check_repeat(t_data glob);
void				start_sort(t_data *stacks);
char				**ft_split(char const *s, char c);
void				free_tmp(char **tmp);
void				free_tmpandstacks(char **tmp, t_data stacks);
void				error_free(t_data stacks);
#endif
