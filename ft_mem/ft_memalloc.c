/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:43:04 by egoodale          #+#    #+#             */
/*   Updated: 2019/05/09 12:01:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_mem;

	if (!(new_mem = malloc(size)))
		return (NULL);
	return (ft_memset(new_mem, '\0', size));
}
