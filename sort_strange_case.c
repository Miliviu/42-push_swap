/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_strange_case.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:50:40 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/19 12:20:01 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	parse_data_spl(char **argv, int argc)
{
	t_data	rtn;
	int		i;

	i = 0;
	rtn.stack_a = malloc(sizeof(int) * argc);
	rtn.stack_b = malloc(sizeof(int) * argc);
	while (argc > i)
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
		{
			printf("Error\n");
			free(rtn.stack_a);
			free(rtn.stack_b);
			exit(0);
		}
		rtn.stack_a[i] = ft_atoi(argv[i]);
		i++;
	}
	rtn.len = i;
	rtn.lena = i;
	rtn.lenb = 0;
	return (rtn);
}

int	check_input_spl(char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (j == 0)
			{	
				if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != '-')
					return (0);
			}
			else
			{
				if (ft_isdigit(argv[i][j]) == 0)
					return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	find_length(char **argv)
{
	int	i;

	i = 0;
	while (argv[i] != 0)
		i++;
	return (i);
}

int	main_aux(int argc, char **argv)
{
	char	**tmp;
	t_data	stacks;

	tmp = ft_split(argv[1], ' ');
	argc = find_length(tmp) + 1;
	if (check_input_spl(tmp) == 0)
		free_tmp(tmp);
	stacks = parse_data_spl(tmp, --argc);
	if (check_repeat(stacks) == 0)
	{
		printf("Error\n");
		free_tmpandstacks(tmp, stacks);
	}
	if (check_solved(stacks) == 0)
		free_tmpandstacks(tmp, stacks);
	start_sort(&stacks);
	free_tmpandstacks(tmp, stacks);
	return (0);
}
