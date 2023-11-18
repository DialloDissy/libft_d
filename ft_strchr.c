/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:19:47 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/16 16:13:56 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == (char)c)
            return((char *)s);
        s++;
    }
    if(*s == (char)c)
        return((char *)s);
    return(0);
}

    // int main ()
    // {    
    //     const char *str =  "tripouille";
    //     int target = 't' + 256;
        
    //     char *result = ft_strchr(str, target);

    //     printf("Le caractère '%c' a été trouvé à la position : %s\n", target, result);
        
    //     return (0);
    // }