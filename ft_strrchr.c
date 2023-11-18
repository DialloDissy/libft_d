/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:11:27 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/18 12:01:40 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include<stdio.h>

char *ft_strrchr(const char *s, int c)
{
    //compte le nombre de char
    int     i;
    char *str;
    
    str = (char *)s;
    i = ft_strlen(str);
    // verifie le caractere "c"
    if( str[i] == (char)c)
        return(str+ i);
    
    // decremente par la fin pour trouver l occurence
    while( i >=0)
    {
        if(str[i] == (char)c)
            return(str +i);
        i--;
    }
    //return NULL si il trouve pas
    return(NULL);
}