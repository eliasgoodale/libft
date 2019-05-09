/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:35:22 by egoodale          #+#    #+#             */
/*   Updated: 2019/05/09 12:01:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char *ft_strtok(char *s, const char *delim)
{
	static char *token;
	char		*ret;

	if (s)
		token = s;
	if (!token || !*token)
		return NULL;
	while(*token && ft_strchr(delim, *token))
		token++;
	ret = *token ? token : NULL;
	token = find_next_any(token, delim);
	if(token)
	{
		*token = '\0';
		token++;
	} 
	return (ret);
}