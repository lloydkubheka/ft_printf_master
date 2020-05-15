/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_wstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:37:17 by xkubheka          #+#    #+#             */
/*   Updated: 2018/08/09 13:37:21 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_wstr(wchar_t *wstr, int precision)
{
	int res;

	res = 0;
	if (wstr == NULL)
		return (ft_print_str("(null)", precision));
	while (*wstr != '\0')
	{
		res += ft_print_wchar(*wstr);
		wstr++;
	}
	return (res);
}
