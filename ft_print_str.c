/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:36:35 by xkubheka          #+#    #+#             */
/*   Updated: 2018/08/11 11:16:40 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str, int precision)
{
	int len;

	len = 0;
	if (str == NULL)
		return (ft_print_str("(null)", precision));
	while (*str != '\0' && precision--)
	{
		len += ft_print_char(*str);
		str++;
	}
	return (len);
}
