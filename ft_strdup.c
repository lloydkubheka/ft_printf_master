/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:20:08 by xkubheka          #+#    #+#             */
/*   Updated: 2018/08/24 12:34:09 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strdup(const char *src)
{
	size_t n;
	char *dst;

	n = ft_strlen(src);
	dst = (char *)malloc(sizeof(const char) * (n + 1));
	if (dst)
		ft_memcpy(dst, src, n + 1);
	return (dst);
}
