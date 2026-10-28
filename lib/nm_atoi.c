/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int nm_atoi(const char *nptr)
{
	int sign;
	int number;

	sign = 1;
	number = 0;

	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\r'
	       || *nptr == '\f' || *nptr == '\v')
		nptr++;

	if (*nptr == '-')
		sign = -1;

	if (*nptr == '+' || *nptr == '-')
		nptr++;

	while (*nptr >= '0' && *nptr <= '9') {
		number = number * 10 + (*nptr - '0');
		nptr++;
	}
	return (number * sign);
}
