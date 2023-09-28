/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:27:48 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/11 10:38:05 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int main() {
    int num1 = 1;
	int num2 = 7;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
    

    printf("Before swapping: a = %d, b = %d\n", num1, num2);

    ft_swap(ptr1, ptr2);

    printf("After swapping: a = %d, b = %d\n", num1, num2);

    return 0;
}
*/