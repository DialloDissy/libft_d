/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:20:50 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/15 14:29:45 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t  b;
    void    *p;

    if(nmemb == 0 || size == 0 )
    {
        nmemb = 1;
        size = 1 ;
    }
    b = nmemb * size;
    p = malloc(b);
    if(p == NULL)
        return(NULL);
    else
        ft_bzero(p,b);
    return(p);
}