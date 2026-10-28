/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_strmapi.c                                       :+:      :+:    :+:   */
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

char *nm_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char  *ptr;
	size_t i;

	if (!s || !f)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * (nm_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s[i] != '\0') {
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
