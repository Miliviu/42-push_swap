/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:01:26 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/13 10:06:36 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data *stacks)
{
	if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1]
		> stacks->stack_a[2] && stacks->stack_a[2] > stacks->stack_a[0])
	{
		sa(stacks);
		ra(stacks);
		return ;
	}
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1]
		< stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
		return (ra(stacks));
	if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1]
		> stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
		return (rra(stacks));
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1]
		< stacks->stack_a[2] && stacks->stack_a[2] > stacks->stack_a[0])
		return (sa(stacks));
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1]
		> stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
	{
		sa(stacks);
		return (rra(stacks));
	}
}
