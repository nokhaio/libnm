/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stdint.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb != 0 && SIZE_MAX / nmemb < size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
		nm_memset(ptr, 0, nmemb * size);

	return (ptr);
}
