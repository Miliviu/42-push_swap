/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:22:31 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/19 10:50:18 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tmp(char **tmp)
{
	int	i;

	printf("Error\n");
	i = 0;
	while (tmp[i] != 0)
		free(tmp[i++]);
	free(tmp);
	exit(1);
}

void	free_tmpandstacks(char **tmp, t_data stacks)
{
	int	i;

	i = 0;
	while (tmp[i] != 0)
		free(tmp[i++]);
	free(tmp);
	free(stacks.stack_a);
	free(stacks.stack_b);
	exit(1);
}

void	error_free(t_data stacks)
{
	printf("Error\n");
	free(stacks.stack_a);
	free(stacks.stack_b);
	exit(1);
}
