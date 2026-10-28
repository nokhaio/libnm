/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_dlstdel_firts.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

void nm_dlstdel_firts(t_dlist **lst, void (*del)(void *))
{
	t_dlist *new_head;

	if (!*lst || !del)
		return;

	new_head = (*lst)->next;
	new_head->prev = NULL;
	del(*lst);
	*lst = new_head;
}
