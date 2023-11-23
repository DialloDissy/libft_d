/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:51:57 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/22 14:18:24 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*i;

	i = (char *)s;
	while (n > 0)
	{
		i[n - 1] = c;
		n--;
	}
	return (s);
}
