/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_dlstclear.c                                      :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

void nm_dlstclear(t_dlist **lst, void (*del)(void *))
{
	t_dlist *node;

	if (*lst != NULL && del != NULL) {
		while (*lst != NULL) {
			node = (*lst)->next;
			nm_dlstdelone(*lst, del);
			*lst = node;
		}
	}
}
