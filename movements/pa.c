/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:52:38 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 10:59:51 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_data *glob)
{
	int	i;
	int	tmp;

	tmp = glob->lena;
	i = 0;
	while (tmp >= 0)
	{
		glob->stack_a[tmp] = glob->stack_a[tmp - 1];
		tmp--;
	}
	i = 0;
	glob->stack_a[0] = glob->stack_b[0];
	glob->lena++;
	tmp = glob->lenb;
	while (i < tmp)
	{
		glob->stack_b[i] = glob->stack_b[i + 1];
		i++;
	}
	glob->lenb--;
	i = 0;
	printf("pa\n");
}
