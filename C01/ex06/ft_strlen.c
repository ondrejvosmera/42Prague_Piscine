/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:31:32 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/11 10:53:30 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*
int main() {
    char str[] = "Hello, World!";
    int length = ft_strlen(str);
    printf("Length of the string is: %d\n", length);
    return 0;
}
*/