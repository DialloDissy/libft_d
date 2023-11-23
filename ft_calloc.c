/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:20:50 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/21 16:40:30 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <limits.h>


// void    *ft_calloc(size_t nmemb, size_t size)
// {
//     void    *ptr;

//     if (nmemb > 0 && INT_MAX / nmemb < size)
//         return (NULL);
//     if (size > 0 && INT_MAX / size < nmemb)
//         return (NULL);
//     ptr = malloc(size * nmemb);
//     if (!ptr)
//         return (NULL);
//     ft_memset(ptr, 0, size * nmemb);
//     return (ptr);
// }


void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;
    if (nmemb > 0 && 2147483647/ nmemb < size)
        return (NULL);
    if (size > 0 && 2147483647 / size < nmemb)
        return (NULL);
    p = (void*)malloc(nmemb * size);
    if(p == NULL)
        return(NULL);
    ft_bzero(p,nmemb * size);
    return(p);
}   