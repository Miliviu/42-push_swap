/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:01:23 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:00:26 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_data *glob)
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
	printf("rb\n");
}
