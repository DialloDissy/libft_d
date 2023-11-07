/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:21:05 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/07 18:44:20 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <=127)
        return(1);
    return(0);
    
}

int main()
{
    char a,result;
    a = ' ';
    result = ft_isascii(a);
    printf("the result is %d", result);
    return (0);
}