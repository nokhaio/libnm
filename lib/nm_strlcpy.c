/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stddef.h>

size_t nm_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len = nm_strlen(src);

	if (src_len >= size) {
		if (size)
			nm_memcpy(dst, src, size);
		dst[size - 1] = '\0';
	} else
		nm_memcpy(dst, src, src_len + 1);

	return src_len;
}
