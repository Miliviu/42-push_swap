/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:02:40 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:00:36 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_data *glob)
{
	int	tmp;
	int	i;
	int	c;

	c = glob->stack_b[0];
	i = 0;
	tmp = glob->lenb;
	while (i < tmp)
	{
		glob->stack_b[i] = glob->stack_b[i + 1];
		i++;
	}
	glob->stack_b[glob->lenb - 1] = c;
	c = glob->stack_a[0];
	i = 0;
	tmp = glob->lena;
	while (i < tmp)
	{
		glob->stack_a[i] = glob->stack_a[i + 1];
		i++;
	}
	glob->stack_a[glob->lena - 1] = c;
	printf("rr\n");
}
