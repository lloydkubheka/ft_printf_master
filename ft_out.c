/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 20:39:11 by xkubheka          #+#    #+#             */
/*   Updated: 2018/08/03 14:50:48 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_out(t_flist *lst, va_list va)
{
	int res;

	res = 0;
	if (lst->spec == '%')
		res = (ft_print_percent(lst, '%'));
	else if (lst->spec == 'c' || lst->spec == 'C')
		res = (ft_character(lst, va_arg(va, void *)));
	else if (lst->spec == 's' || lst->spec == 'S')
		res = (ft_string(lst, va_arg(va, void *)));
	else if (lst->spec == 'd' || lst->spec == 'i' || lst->spec == 'D')
		res = (ft_digit(lst, va_arg(va, void *)));
	else if (lst->spec == 'u' || lst->spec == 'U')
		res = (ft_unsigned_digit(lst, va_arg(va, void *)));
	else if (lst->spec == 'x' || lst->spec == 'X')
		res = (ft_unsigned_hexadecimal(lst, va_arg(va, void *)));
	else if (lst->spec == 'o' || lst->spec == 'O')
		res = (ft_octal(lst, va_arg(va, void *)));
	else if (lst->spec == 'p')
		res = (ft_pointer(lst, va_arg(va, void *)));
	else
		res = (ft_character(lst, va_arg(va, void *)));
	ft_strdel(&(lst->flags));
	return (res);
}
