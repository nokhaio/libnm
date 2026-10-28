/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

int nm_lstsize(t_list *lst)
{
	int size = 0;

	while (lst != NULL) {
		lst = lst->next;
		size++;
	}

	return (size);
}
