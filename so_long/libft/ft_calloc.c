/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:24:25 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/23 13:24:25 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*s;
	size_t			n;

	n = nmemb * size;
	s = malloc(n);
	if (s == 0)
		return (0);
	return (ft_memset(s, 0, n));
}
