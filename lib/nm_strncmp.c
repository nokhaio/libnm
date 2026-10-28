/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int nm_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);

	while (n-- != 0) {
		if (*s1 != *s2)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);

		if (*s1 == '\0')
			break;

		s1++;
		s2++;
	}
	return (0);
}
