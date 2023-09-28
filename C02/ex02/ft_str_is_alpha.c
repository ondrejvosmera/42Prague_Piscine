/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:55:33 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/12 11:54:03 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
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
			if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
	char string[] = "HelloWorld";
	int result = ft_str_is_alpha(string);

	if(result == 1) {
		printf("The string contains only alphabet characters.");
	} else {
		printf("The string contains non-alphabetical characters.");
	}
}
*/