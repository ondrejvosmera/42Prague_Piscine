/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:25:17 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/11 10:52:29 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;

	tmp_a = *a;
	*a = tmp_a / *b;
	*b = tmp_a % *b;
}

/*
int main() {
    int num1 = 20;
    int num2 = 3;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Before division: a = %d, b = %d\n", num1, num2);

    ft_ultimate_div_mod(ptr1, ptr2);

    printf("After division: a = %d, b = %d\n", num1, num2);

    return 0;
}
*/