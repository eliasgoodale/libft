/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 14:50:48 by egoodale          #+#    #+#             */
/*   Updated: 2018/07/17 13:19:17 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_str_toupper(char *s)
{
	while (*s)
	{
		*s = IS_LOWER(*s) ? *s - 32 : *s;
		s++;
	}
}
