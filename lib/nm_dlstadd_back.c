/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

void nm_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist *last;

	if (new == NULL)
		return;

	if (*lst == NULL) {
		*lst = new;
	} else {
		last = nm_dlstlast(*lst);
		last->next = new;
		new->prev = last;
	}
}
