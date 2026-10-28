/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stddef.h>
#include <stdlib.h>

char *nm_substr(char const *s, unsigned int start, size_t len)
{
	char  *substr;
	size_t s_len;

	if (!s)
		return NULL;

	s_len = nm_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;

	substr = malloc(len + 1);
	if (!substr)
		return NULL;

	nm_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return substr;
}
