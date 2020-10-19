/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:27:47 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/16 18:35:16 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_parsing(char **out, char **format, va_list ap)
{
	t_format_specifier *pformat;

	if (!(pformat = ft_init_format_specifier()))
		return (-1);

	return (ft_parse_check(out, format, ap, pformat));
}