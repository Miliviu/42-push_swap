/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:01:28 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 12:34:32 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_data *glob)
{
	int	tmp;
	int	i;
	int	c;

	c = glob->stack_a[glob->lena - 1];
	i = 0;
	tmp = glob->lena;
	while (tmp >= 0)
	{
		glob->stack_a[tmp] = glob->stack_a[tmp - 1];
		tmp--;
	}
	glob->stack_a[0] = c;
	c = glob->stack_b[glob->lenb - 1];
	i = 0;
	tmp = glob->lenb;
	while (tmp >= 0)
	{
		glob->stack_b[tmp] = glob->stack_b[tmp - 1];
		tmp--;
	}
	glob->stack_b[0] = c;
	printf("rrr\n");
}
