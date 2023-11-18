/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:26:34 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/16 13:24:33 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    unsigned char    *dest1;
    unsigned char    *src1;

    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    
    i =0;
    if(src < dest)
    {
        i= n;
        while(i >0)
        {
            i--;
            dest1[i] = src1[i];
        }
        
    }
    else
    {
         i=0;
         while(i < n )
         {
             dest1[i] = src1[i];
             i ++;
         }
    }
    return(dest);
}