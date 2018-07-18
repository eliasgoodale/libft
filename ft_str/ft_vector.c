/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <egoodale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:52:46 by egoodale          #+#    #+#             */
/*   Updated: 2018/07/17 18:11:34 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_subvector_slide(t_vector *vector, char *data, char *target, size_t data_len)
{
	VAR(int, orient, target >= data ? 1 : -1);
	VAR(char *, start, ~orient ? data : data + (data_len - 1));
	VAR(char *, subt, start + (orient * data_len));
	VAR(size_t, shifts, ~orient ? (target - subt) : (subt - target));
	if(shifts < data_len)
		return ;
	while (shifts-- != 0)
	{
		ft_charswap(start, subt);
		start += orient;
		subt += orient;
	}
	ft_subvector_slide(vector, start, target, data_len);
}


int		ft_vector_init(t_vector *vector, size_t init_cap)
{
	if (!vector || !init_cap)
		return (-1);
	vector->len = 0;
	vector->cap = init_cap;
	if ((vector->data = ft_memalloc(sizeof(char) * vector->cap)) == NULL)
		return (-1);
	return (0);
}

void	ft_vector_append(t_vector *vector, char *newdata)
{
	size_t nd_len;

	nd_len = ft_strlen(newdata);
	if (vector->cap < vector->len + nd_len)
		ft_vector_resize(vector, vector->len + nd_len);
	ft_memcpy(vector->data + vector->len, newdata, nd_len);
	vector->len += nd_len;
}

void	ft_vector_resize(t_vector *vector, size_t min)
{
	size_t	mllc_size;

	if (!(vector->data))
		ft_vector_init(vector, min);
	mllc_size = vector->cap;
	while (mllc_size < min)
		mllc_size *= 2;
	vector->data = (char *)ft_recalloc(vector->data, vector->len, mllc_size);
	vector->cap = mllc_size;
}

void	ft_vector_nappend(t_vector *vector, char *newdata, size_t n)
{
	size_t nd_len;

	nd_len = n;
	if (vector->cap < vector->len + nd_len)
		ft_vector_resize(vector, vector->len + nd_len);
	ft_memcpy(vector->data + vector->len, newdata, nd_len);
	vector->len += nd_len;
}

void	ft_vector_free(t_vector *vector)
{
	if (vector->data && vector->cap > 0)
	{
		free(vector->data);
		vector->data = NULL;
	}
}
