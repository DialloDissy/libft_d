/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:57:15 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/15 14:34:25 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
#include "libft.h"

 size_t ft_strlen(const char *s)
 {
    int i;
    
    i = 0 ;
    while(s[i])
        i++;
    return(i);
 }
 
 
//  int    main()
//  {
//     char a[] = "easynkjhjhjh";
//     char nbr = ft_strlen(a);

//     printf("nombre de caractere %d", nbr );
//     return(0);
//  }