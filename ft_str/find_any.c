/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:54:40 by egoodale          #+#    #+#             */
/*   Updated: 2018/07/16 10:06:31 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*find_next_any(char *haystack, const char *any)
{
	VAR(size_t, len, 0);
	VAR(char *, ret, NULL);
	len = ft_strlen(haystack);
	if (any == '\0')
		return(&haystack[len]);
	while (*any)
	{
		if ((ret = ft_strchr(haystack, *any)))
			return(ret);
		else
			any++;
	}
	return (NULL);
}
