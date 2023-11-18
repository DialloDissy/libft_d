/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:59:09 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/15 14:38:45 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    // trouver la chaine de dest
    while(dst[i] &&  i < size)
        i++;
    // copier src dans dest
    while(src[j]&& (i + j + 1) < size )
    {
        dst[i + j] = src[j];
        j++;
    }
    // ajouter le caractere nul a la fin
    if (i <size)
        dst[i + j] = '\0';
    
    // renvoie la longueur max de la chaine 
    return( i + ft_strlen(src));
}