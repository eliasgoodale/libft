/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:25:10 by egoodale          #+#    #+#             */
/*   Updated: 2018/07/15 12:36:03 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_printf.h>

int main(void)
{

    /*
    ** ft_skipspace
    */
    char *s = "           hello";
    s = ft_skipspace(s);
    ft_printf("%s\n", s);

    /*
    ** ft_atoi
    */
    char *a = "              87314636          '    ";
    int i = ft_atoi(a);
    ft_printf("%d\n", i);
}