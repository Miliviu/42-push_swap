/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:25:31 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/19 12:14:10 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long int	ft_atoi(const char *s)
{
	long long int	tmp;
	long long int	nmb;
	long long int	sign;

	tmp = 0;
	nmb = 0;
	sign = 0;
	while (s[tmp] == 32 || s[tmp] == '\n' || \
	s[tmp] == '\v' || s[tmp] == '\r' || s[tmp] == '\t' || s[tmp] == '\f')
		tmp++;
	if (s[tmp] == '+')
		tmp++;
	else if (s[tmp] == '-')
	{
		tmp++;
		sign = 1;
	}
	while (s[tmp] >= '0' && s[tmp] <= '9')
	{
		nmb = nmb * 10 + s[tmp] - '0';
		tmp++;
	}
	if (sign == 1)
		nmb = -nmb;
	return (nmb);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	check_solved(t_data glob)
{
	int	i;

	i = 0;
	while (i < glob.len - 1)
	{
		if (glob.stack_a[i] > glob.stack_a[i + 1])
			return (1);
		i++;
	}
	if (glob.lenb != 0)
		return (1);
	return (0);
}

int	small_search(t_data	*stacks)
{
	int	check;
	int	tmp;
	int	tmp2;
	int	i;

	check = 0;
	tmp2 = 0;
	tmp = stacks->lena - 1;
	i = 0;
	while (tmp > 0)
	{
		while (tmp2 < tmp)
		{
			if (stacks->stack_a[tmp2] < stacks->stack_a[tmp])
				check = 1;
			tmp2++;
		}
		if (check == 0)
			return (tmp);
		check = 0;
		tmp2 = 0;
		tmp--;
	}
	return (0);
}
