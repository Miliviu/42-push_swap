/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:21:17 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:00:16 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_data *glob)
{
	int	tmp;
	int	i;
	int	c;

	c = glob->stack_a[0];
	i = 0;
	tmp = glob->lena;
	while (i < tmp)
	{
		glob->stack_a[i] = glob->stack_a[i + 1];
		i++;
	}
	glob->stack_a[glob->lena - 1] = c;
	printf("ra\n");
}
