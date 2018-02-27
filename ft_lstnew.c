/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <eligoodale1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:58:07 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/22 17:15:52 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t c_s)
{
	t_list	*new_list;

	if (!(new_list = (t_list *)malloc(sizeof(*new_list))))
		return (NULL);
	if (new_list)
	{
		if (content)
		{
			new_list->content = malloc(sizeof(c_s));
			if (!new_list->content)
			{
				free(new_list);
				return (NULL);
			}
			new_list->content = ft_memcpy(new_list->content, content, c_s);
			new_list->content_size = c_s;
		}
		else
		{
			new_list->content = NULL;
			new_list->content_size = 0;
		}
		new_list->next = NULL;
	}
	return (new_list);
}
