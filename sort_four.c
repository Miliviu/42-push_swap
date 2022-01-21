/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:58:01 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/13 09:58:13 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four_aux1(t_data	*stacks)
{
	pb(stacks);
	sort_three(stacks);
	pa(stacks);
}

void	sort_four_aux2(t_data	*stacks)
{
	sa(stacks);
	pb(stacks);
	sort_three(stacks);
	pa(stacks);
}

void	sort_four(t_data	*stacks)
{
	int	i;

	i = small_search(stacks);
	if (i == 0)
		sort_four_aux1(stacks);
	if (i == 1)
		sort_four_aux2(stacks);
	if (i == 2)
	{
		ra(stacks);
		ra(stacks);
		pb(stacks);
		sort_three(stacks);
		pa(stacks);
	}
	if (i == 3)
	{
		rra(stacks);
		pb(stacks);
		sort_three(stacks);
		pa(stacks);
	}
}
