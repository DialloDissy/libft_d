/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:14:44 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/18 15:45:42 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;


    //initialise i et j pour parcourir les strings;
    i = 0;
    j = 0;
    
    // verifie les caractere big et little
    if(big == NULL || little == NULL)
        return((char *)big + i);

   
    // on parcours la chaine  de big et on rajoute la limite de len(compteur)
    while(big[i] && i < len)
    {
        // on cherche la sous chaines little(1ier occurence)
        if(big[i] == little[j])
        {
            // on verifie que i+j respecte les condition, sont egaux sur little et ne depasse pas len
            while(big[i +j] == little [j] && i +j < len)
            {
                
                if(little[j + 1] == '\0')
                    return((char *)big +i);
                i++;
            }
            j = 0 ;
        }
        i++;
    }
    return(NULL);
} 