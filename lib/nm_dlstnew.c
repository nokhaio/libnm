/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stdlib.h>

t_dlist *nm_dlstnew(void *content)
{
	t_dlist *node;

	node = (t_dlist *) malloc(sizeof(t_dlist));
	if (node == NULL)
		return (NULL);

	node->content = content;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}
