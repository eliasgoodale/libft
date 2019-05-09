/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_char_to.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:44:29 by egoodale          #+#    #+#             */
/*   Updated: 2019/05/09 12:01:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	shift_char_to(char *selected, char *target)
{
	VAR(int, orient, target >= selected ? 1 : -1);
	if (selected == target)
		return ;
	if (orient > 0)
		while (selected++ < target)
			ft_charswap(selected - 1, selected);
	else
		while (target < (selected))
		{
			ft_charswap(target, selected);
			target++;
		}
}
