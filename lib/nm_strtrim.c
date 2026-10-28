/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <unistd.h>

char *nm_strtrim(char const *s1, char const *set)
{
	int start;
	int end;

	if (!s1 || !set)
		return NULL;

	start = 0;
	end = nm_strlen(s1);

	while (s1[start] && nm_strchr(set, s1[start]))
		start++;

	while (end > start && nm_strchr(set, s1[end - 1]))
		end--;

	return nm_substr(s1, start, end - start);
}
