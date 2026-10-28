/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *nm_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *) s;

	while (n--) {
		if (*p == c)
			return (void *) p;
		p++;
	}

	return NULL;
}
