/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

void nm_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) {
		nm_putstr_fd("-2147483648", fd);
		return;
	}
	if (n < 0) {
		nm_putchar_fd('-', fd);
		n *= -1;
	}
	if (n / 10)
		nm_putnbr_fd(n / 10, fd);
	nm_putchar_fd((n % 10 + '0'), fd);
}
