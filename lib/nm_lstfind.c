/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

t_list *nm_lstfind(t_list *lst, void *content, int (*cmp)(void *, void *))
{
	t_list *node;

	if (lst == NULL)
		return (NULL);

	node = NULL;
	while (lst->next != NULL) {
		if (!cmp(content, lst->content)) {
			node = lst;
			break;
		}
		lst = lst->next;
	}

	return node;
}
