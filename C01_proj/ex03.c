/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                      :+:       :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:52:18 by marvin            #+#    #+#             */
/*   Updated: 2024/02/10 12:52:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){

    int divide = a/b;
    int multiply = a*b;
    *div = divide;
    *mod = multiply;
}

// int main(){
//     int resultDiv;
//     int resultMod;

//     ft_div_mod(100,10,&resultDiv,&resultMod);
//     printf(("%d, %d"),resultDiv,resultMod);
//     return 0;
// }