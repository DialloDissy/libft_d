/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:55:10 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/15 14:30:28 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *str;
    
    i = 0;
    j = 0;
    str = (char*)malloc(sizeof(char)*(ft_strlen(s1)+ ft_strlen(s2) +1));
    if(str == NULL)
        return NULL;
    while(s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        str[i+j] = s2[j];
        j++;
    }
    str[i +j] = '\0';
    return(str);
}
    