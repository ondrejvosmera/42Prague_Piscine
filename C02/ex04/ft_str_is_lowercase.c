/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:23:30 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/12 12:01:21 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
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
			if ((*str >= 'a' && *str <= 'z'))
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
	char string[] = "hello";
	int result = ft_str_is_lowercase(string);

	if(result == 1) {
		printf("The string contains only lowercase characters.");
	} else {
		printf("The string contains non-lowercase characters.");
	}
}
*/