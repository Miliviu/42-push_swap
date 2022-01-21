/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:08:07 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:00:05 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_data *glob)
{
	int	i;
	int	tmp;

	tmp = glob->lenb;
	i = 0;
	while (tmp >= 0)
	{
		glob->stack_b[tmp] = glob->stack_b[tmp - 1];
		tmp--;
	}
	i = 0;
	glob->stack_b[0] = glob->stack_a[0];
	glob->lenb++;
	tmp = glob->lena;
	while (i < tmp)
	{
		glob->stack_a[i] = glob->stack_a[i + 1];
		i++;
	}
	glob->lena--;
	i = 0;
	printf("pb\n");
}
