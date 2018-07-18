/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:01:48 by egoodale          #+#    #+#             */
/*   Updated: 2018/07/15 12:12:15 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int     ft_isspace(int c)
{
   VAR(const char *, space_chars, " \t\n\v\r\f");
   return(ft_strchr(space_chars, c) ? 1 : 0);
}