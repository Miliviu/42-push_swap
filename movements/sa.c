/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:38:39 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/12 11:02:00 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data *glob)
{
	int	tmp;

	tmp = glob->stack_a[0];
	glob->stack_a[0] = glob->stack_a[1];
	glob->stack_a[1] = tmp;
	printf("sa\n");
}
