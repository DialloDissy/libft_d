/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:06:32 by sidiallo          #+#    #+#             */
/*   Updated: 2023/11/14 16:09:49 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <strings.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}