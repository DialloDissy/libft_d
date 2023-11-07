/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:33:25 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/07 17:49:22 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<ctype.h>
#include<stdio.h>

int ft_isdigit(int c)

{
    if(c >= '0' && c <= '9')
        return(1);
    return(0);
}

int main()
{
    char c,result;

    c = 'b';
    result = ft_isdigit(c);
    printf("the result is %d", result);
    return 0;
    
}
