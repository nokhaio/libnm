/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_lstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnm.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;
	void   *new_content;

	if (lst == NULL)
		return (NULL);

	new_list = NULL;
	new_node = NULL;
	while (lst != NULL) {
		new_content = (*f)(lst->content);
		new_node = nm_lstnew(new_content);
		if (new_node == NULL) {
			(*del)(new_content);
			nm_lstclear(&new_list, del);
			return (NULL);
		}
		nm_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
