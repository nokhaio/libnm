/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *nm_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pd;
	unsigned char *ps;

	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;

	if (n == 0 || dest == src)
		return dest;

	if (pd < ps) {
		while (n--)
			*pd++ = *ps++;
	} else {
		pd += n;
		ps += n;

		while (n--)
			*(--pd) = *(--ps);
	}

	return dest;
}
