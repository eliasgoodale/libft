/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <eligoodale1@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:58:07 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/27 11:20:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*t_list	*ft_lstnew(void const *content, size_t c_s)
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
}*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *retval;

	retval = (t_list*)malloc(sizeof(t_list));
	if (retval == NULL)
		return (NULL);
	if (content == NULL)
	{
		retval->content = NULL;
		retval->content_size = 0;
	}
	else
	{
		retval->content = malloc(content_size);
		if (content == NULL)
		{
			free(retval);
			return (NULL);
		}
		ft_memcpy(retval->content, content, content_size);
		retval->content_size = content_size;
	}
	retval->next = NULL;
	return (retval);
}
