/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Note: Non-libft function.
 * Uses the Boyer-Moore-Horspool string searching algorithm.
 */

#include "libnm.h"
#include <stddef.h>

char *nm_strstr(const char *haystack, const char *needle)
{
	size_t haystack_l = nm_strlen(haystack);
	size_t needle_l = nm_strlen(needle);
	int    shifts[256];

	if (needle_l == 0)
		return (char *) haystack;

	if (needle_l < haystack_l)
		return NULL;

	for (size_t i = 0; i < 256; ++i)
		shifts[i] = needle_l;
	for (size_t i = 0; i < needle_l - 1; ++i) {
		int c = needle[i];
		shifts[c] = needle_l - i - 1;
	}

	size_t i = 0;
	while (i <= haystack_l - needle_l) {
		int j = needle_l - 1;
		while (j >= 0 && haystack[i + j] == needle[j])
			j--;

		if (j < 0)
			return (char *) (haystack + i);
		int c = haystack[i + needle_l - 1];
		i += shifts[c];
	}
	return NULL;
}
