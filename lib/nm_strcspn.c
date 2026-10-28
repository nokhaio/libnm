/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stddef.h>

size_t nm_strcspn(const char *s, const char *reject)
{
	size_t size = 0;

	while (s[size] && !nm_strchr(reject, s[size]))
		size++;

	return size;
}
