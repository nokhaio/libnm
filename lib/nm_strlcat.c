/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stddef.h>

size_t nm_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len = nm_strlen(src);

	if (size == 0)
		return src_len;

	size_t dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;

	if (dst_len != size) {
		size_t to_copy = size - dst_len - 1;

		if (to_copy > src_len)
			to_copy = src_len;

		char *end_dst = dst + dst_len;
		nm_memcpy(end_dst, src, to_copy);
		end_dst[to_copy] = '\0';
	}
	return dst_len + src_len;
}
