/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:41:30 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/23 14:46:48 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static unsigned int ft_nbr_size(int nbr)
{
    int len;
    int neg;
    len =0;
    neg =0 ;
    if(nbr < 0 && nbr > -2147483648)
    {
        neg = 1;
        len++;
        nbr = -nbr;
    }
    else if(nbr == 0)
        return(1);
    else if( nbr  == -2147483648)
        return(11);
    while(nbr >= 1)
    {
        nbr = nbr / 10;
        len++;
    }
    return(len);
}


char *ft_itoa(int n)
{
    char *str;
    int num;
    int length;
    int neg;
    unsigned int tp;

    neg = ( n < 0 ? 1 : 0);
    num = 1;
    length = ft_nbr_size(n);
    str = (char *)malloc(sizeof(char) * (length + 1));
    if(str == NULL)
        return (NULL);
    tp = ( n < 0 ? -n : n);
    if(tp ==0)
        str[tp]= '0';
    while(tp >= 1)
    {
        str[length - num] = (tp % 10) + '0';
        tp = tp / 10 ;
        num++ ;
    }
     if(neg)
        *str = '-';
    str[length] = '\0';
    return(str);
    
}