/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:45:17 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/15 14:25:48 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while(*s1 !='\0'&& *s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if(n ==0)
        return(0);
    return(*(unsigned char *)s1 -*(unsigned char *)s2);
}