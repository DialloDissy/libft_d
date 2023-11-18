/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:15:58 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/15 16:29:59 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *strA;
    unsigned char *strB;
    size_t i;

    i=0;
    strA = (unsigned char *)s1;
    strB = (unsigned char *)s2;
    while( 0 < n)
    {
        if (strA[i] != strB[i])
            return (strA[i] - strB[i]);
        i++;
        n--;
    }
    return (0);
    
}
