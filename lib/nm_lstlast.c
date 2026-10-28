/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

t_list *nm_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);

	while (lst->next != NULL)
		lst = lst->next;

	return (lst);
}
