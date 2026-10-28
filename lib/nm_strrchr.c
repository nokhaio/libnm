/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *nm_strrchr(const char *s, int c)
{
	char *schar;
	char *ps;

	ps = (char *) s;
	schar = NULL;

	while (1) {
		if (*ps == (char) c)
			schar = ps;
		if (*ps == '\0')
			break;
		ps++;
	}
	return schar;
}
