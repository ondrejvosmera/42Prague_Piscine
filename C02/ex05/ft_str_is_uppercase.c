/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:28:07 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/12 18:09:17 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	result;

	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (*str != '\0')
		{
			if ((*str >= 'A' && *str <= 'Z'))
			{
				result = 1;
			}
			else
			{
				result = 0;
				break ;
			}
			str++;
		}
	}
	return (result);
}

/*
int main() {
	char string[] = "HELLO";
	int result = ft_str_is_uppercase(string);

	if(result == 1) {
		printf("The string contains only uppercase characters.");
	} else {
		printf("The string contains non-uppercase characters.");
	}
}
*/
