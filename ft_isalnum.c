/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:58:33 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/07 18:18:35 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int ft_isalnum(int c)
{
    if(((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z') || (c >='0' && c <= '9')))
        return(1);
    return(0);
}

int main()
{
    char c, result;
    
    c = 'a';
    
    result = ft_isalnum(c);
    
    printf("The result is %d", result);
    
    return 0;
}