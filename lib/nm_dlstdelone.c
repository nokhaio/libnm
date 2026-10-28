/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_dlstdelone.c                                      :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"
#include <stdlib.h>

void nm_dlstdelone(t_dlist *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL) {
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}
