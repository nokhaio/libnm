/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *nm_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *pd;
	unsigned char *ps;

	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;

	if (dest == src)
		return dest;

	while (n--)
		*pd++ = *ps++;

	return dest;
}
