/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:02:36 by xkubheka          #+#    #+#             */
/*   Updated: 2018/08/09 15:02:41 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_string(t_flist *lst, void *str)
{
	int len;

	lst->size = (str != NULL) ? ft_strlen((char *)str) : 6;
	len = 0;
	lst->size = !lst->precision ? lst->width : lst->size;
	if ((lst->flags)[2] == '0')
		(lst->flags)[0] = '0';
	while ((lst->flags)[3] != '-' && lst->width > lst->size)
		(len += ft_print_char((lst->flags)[0])) && (lst->width)--;
	while ((lst->flags)[3] != '-' && lst->width > lst->precision &&
				 lst->precision != -1 && (lst->size > lst->precision))
		len += ft_print_char((lst->flags)[0]) && lst->width--;
	if (lst->spec == 's' && !lst->l)
		len += ft_print_str((char *)str, lst->precision);
	else if (lst->spec == 'S' || (lst->spec == 's' && lst->l))
		len += ft_print_wstr((wchar_t *)str, lst->precision);
	while ((lst->flags)[3] == '-' && lst->width > lst->size)
		len += ft_print_char(' ') && lst->width--;
	while ((lst->flags)[3] == '-' && lst->width > lst->precision &&
				 lst->precision != -1 && (lst->size-- - lst->precision))
		len += ft_print_char(' ');
	return (len);
}
