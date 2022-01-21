/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:12:28 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:00:48 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_data *glob)
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
	printf("rra\n");
}
