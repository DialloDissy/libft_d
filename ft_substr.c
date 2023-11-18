/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:58:29 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/18 12:44:52 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t  i;
    size_t j;
    char    *str;

    //malloc la taille de len,pour mettre la chn de s
    str = (char *)malloc(sizeof(char)*(len)+1);
    if(str == 0)
        return(NULL);
    //initialise i et J pour parcourir la chaine 
    i =0;
    j =0;
    while(s[i])
    {
        if(i >= start && j< len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return(str);
} 