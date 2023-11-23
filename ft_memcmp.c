/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:15:58 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/22 14:26:15 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*strA;
	unsigned char	*strB;
	size_t			i;

	i = 0;
	strA = (unsigned char *)s1;
	strB = (unsigned char *)s2;
	while (0 < n)
	{
		if (strA[i] != strB[i])
			return (strA[i] - strB[i]);
		i++;
		n--;
	}
	return (0);
}
