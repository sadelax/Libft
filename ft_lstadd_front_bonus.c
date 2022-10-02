/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 02:52:46 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 06:19:54 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Añade el nodo ’new’ al principio de la lista ’lst’.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
