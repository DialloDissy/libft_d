/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:54:40 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/07 18:56:39 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <=126)
        return(1);
    return(0);
    
}

int main()
{
    char a,result;
    a = ' ';
    result = ft_isprint (a);
    printf("the result is %d", result);
    return (0);
}