/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:20:29 by xkubheka          #+#    #+#             */
/*   Updated: 2018/08/29 16:54:47 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_atoi_f(char **s)
{
	int result;
	int count;
	int state;

	result = 0;
	count = 0;
	state = 1;
	while ('0' <= (*s)[count] && (*s)[count] <= '9')
	{
		result = result * 10 + (*s)[count] - '0';
		count++;
	}
	(*s) = &(*s)[count];
	return (result * state);
}
