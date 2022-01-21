/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:26:27 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/18 08:26:45 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	map_numbers(t_data	*stacks)
{
	int	i;
	int	j;
	int	*rtn;

	rtn = malloc(sizeof(int) * stacks->lena);
	i = 0;
	j = 0;
	while (i < stacks->lena)
	{
		rtn[i] = 0;
		while (j < stacks->lena)
			if (stacks->stack_a[i] > stacks->stack_a[j++])
				rtn[i]++;
		j = 0;
		i++;
	}
	stacks->stack_a = rtn;
}

void	sort_long(t_data	*stacks)
{
	int	i;
	int	j;

	j = 0;
	map_numbers(stacks);
	while (check_solved(*stacks) != 0)
	{
		i = stacks->lena;
		while (i-- != 0)
		{
			if (stacks->stack_a[0] & (1 << j))
				ra(stacks);
			else
				pb(stacks);
		}
		while (stacks->lenb > 0)
			pa(stacks);
		j++;
	}
}
