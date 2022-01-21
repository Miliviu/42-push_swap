/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:16:40 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:00:59 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_data *glob)
{
	int	tmp;
	int	i;
	int	c;

	c = glob->stack_b[glob->lenb - 1];
	i = 0;
	tmp = glob->lenb;
	while (tmp >= 0)
	{
		glob->stack_b[tmp] = glob->stack_b[tmp - 1];
		tmp--;
	}
	glob->stack_b[0] = c;
	printf("rrb\n");
}
