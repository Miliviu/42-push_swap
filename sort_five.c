/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:58:24 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/13 10:07:59 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_aux(t_data	*stacks)
{
	pb(stacks);
	sort_four(stacks);
	pa(stacks);
}

void	sort_five_aux2(t_data	*stacks)
{
	sa(stacks);
	pb(stacks);
	sort_four(stacks);
	pa(stacks);
}

void	sort_five_aux3(t_data	*stacks)
{
	ra(stacks);
	ra(stacks);
	pb(stacks);
	sort_four(stacks);
	pa(stacks);
}

void	sort_five(t_data	*stacks)
{
	int	i;

	i = small_search(stacks);
	if (i == 0)
		sort_five_aux(stacks);
	if (i == 1)
		sort_five_aux2(stacks);
	if (i == 2)
		sort_five_aux3(stacks);
	if (i == 3)
	{
		rra(stacks);
		rra(stacks);
		pb(stacks);
		sort_four(stacks);
		pa(stacks);
	}
	if (i == 4)
	{
		rra(stacks);
		pb(stacks);
		sort_four(stacks);
		pa(stacks);
	}
}
