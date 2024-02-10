/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:57:02 by marvin            #+#    #+#             */
/*   Updated: 2024/02/10 12:57:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){

    int con1 = *a;
    int con2 = *b;

    int divide = con1 / con2;
    int multiply = con1 * con2; 
    
    *a = divide;
    *b = multiply;


    //also right

    // int divide = *a / *b;
    // int multiply = *a * *b;

    // *a = divide;
    // *b = multiply;
}

// int main(){
//     int result1 = 50;
//     int result2 = 5;

//     ft_ultimate_div_mod(&result1,&result2);
//     printf("%d, %d",result1,result2);
// }