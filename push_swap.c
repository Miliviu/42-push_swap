/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:09:51 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/19 12:19:45 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	parse_data(char **argv, int argc)
{
	t_data	rtn;
	int		i;

	i = 0;
	rtn.stack_a = malloc(sizeof(int) * argc);
	rtn.stack_b = malloc(sizeof(int) * argc);
	while (argc > i)
	{
		if (ft_atoi(argv[i + 1]) > INT_MAX || ft_atoi(argv[i + 1]) < INT_MIN)
		{
			printf("Error\n");
			free(rtn.stack_a);
			free(rtn.stack_b);
			exit(0);
		}
		rtn.stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	rtn.len = i;
	rtn.lena = i;
	rtn.lenb = 0;
	return (rtn);
}

int	check_repeat(t_data glob)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (i < glob.len)
	{
		while (j < glob.len)
		{
			if (glob.stack_a[i] == glob.stack_a[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	check_input(char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
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

void	start_sort(t_data *stacks)
{
	if (stacks->lena == 2)
		return (sa(stacks));
	if (stacks->lena == 3)
		return (sort_three(stacks));
	if (stacks->lena == 4)
		return (sort_four(stacks));
	if (stacks->lena == 5)
		return (sort_five(stacks));
	if (stacks->lena > 5)
		return (sort_long(stacks));
}

int	main(int argc, char **argv)
{
	t_data	stacks;

	if (argc < 2)
		return (1);
	if (argc == 2)
		return (main_aux(argc, argv));
	if (check_input(argv) == 0)
		return (printf("Error\n"));
	stacks = parse_data(argv, --argc);
	if (check_repeat(stacks) == 0)
		error_free(stacks);
	if (check_solved(stacks) == 0)
	{
		free(stacks.stack_a);
		free(stacks.stack_b);
		exit(0);
	}
	start_sort(&stacks);
	free(stacks.stack_a);
	free(stacks.stack_b);
}
