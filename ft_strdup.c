/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:09:48 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/16 14:33:54 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdlib.h>
#include<stdio.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    int j;
    char    *str;
    
    i = 0;
    j = 0;
    while(s[i])
        i++;
    str = (char *)malloc(sizeof(*str) *(i + 1));
    
    while(j<i)
    {
        str[j] = s[j];
        j++;
    }
    str[j] = '\0';
    
    return(str);  
}

// // int main()
// // {
// //     char a[] = "hello";
    
// //     char c;
// //     c = ft_strdup(a);
// //     printf("%s", c);
// //     return 0;    
// }