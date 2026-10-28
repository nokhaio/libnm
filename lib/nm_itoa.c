/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

char *nm_itoa(int n)
{
	long num = n;
	int  i = 11;
	char buf[12];

	buf[i--] = '\0';
	if (num == 0)
		buf[i--] = '0';

	if (num < 0)
		num = -num;

	while (num > 0) {
		buf[i--] = (num % 10) + '0';
		num /= 10;
	}

	if (n < 0)
		buf[i--] = '-';

	return (nm_strdup(buf + i + 1));
}
