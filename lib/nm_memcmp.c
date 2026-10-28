/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int nm_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ps1;
	const unsigned char *ps2;

	ps1 = (const unsigned char *) s1;
	ps2 = (const unsigned char *) s2;

	while (n--) {
		if (*ps1++ != *ps2++)
			return (*(--ps1) - *(--ps2));
	}

	return (0);
}
