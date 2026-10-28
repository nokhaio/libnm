/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stdlib.h>

char *nm_strdup(const char *s)
{
	size_t len;
	char  *dup;

	len = nm_strlen(s);

	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	nm_memcpy(dup, s, len);
	dup[len] = '\0';

	return (dup);
}
