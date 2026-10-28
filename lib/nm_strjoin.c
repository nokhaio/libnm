/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strjoin.c                                       :+:      :+:    :+:   */
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

char *nm_strjoin(char const *s1, char const *s2)
{
	char  *new_s;
	size_t s1_len;
	size_t s2_len;

	if (!s1 || !s2)
		return (NULL);

	s1_len = nm_strlen(s1);
	s2_len = nm_strlen(s2);

	new_s = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_s == NULL)
		return (NULL);

	nm_strlcpy(new_s, s1, s1_len);
	nm_strlcat(new_s, s2, s2_len);
	return (new_s);
}
