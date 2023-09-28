/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:19:41 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/12 12:00:36 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
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
			if ((*str >= '0' && *str <= '9'))
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
	char string[] = "42";
	int result = ft_str_is_numeric(string);

	if(result == 1) {
		printf("The string contains only digits.");
	} else {
		printf("The string contains non-digit characters.");
	}
}
*/