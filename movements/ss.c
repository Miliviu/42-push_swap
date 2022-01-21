/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:45:02 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:02:19 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_data *glob)
{
	int	tmp;

	tmp = glob->stack_a[0];
	glob->stack_a[0] = glob->stack_a[1];
	glob->stack_a[1] = tmp;
	tmp = glob->stack_b[0];
	glob->stack_b[0] = glob->stack_a[1];
	glob->stack_b[1] = tmp;
	printf("ss");
}
