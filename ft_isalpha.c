/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:40:31 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/07 17:30:12 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int ft_isalpha(int c)

{
    if(('a'<= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
        return(1);
    return(0);
}

int main()
{
    char c;
    char result;

    c = 'c';
    result = ft_isalpha(c);
    printf("the result is %d", result);
    return 0;
    
}
