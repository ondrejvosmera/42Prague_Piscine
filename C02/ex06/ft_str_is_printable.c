/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:32:59 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/12 11:51:30 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
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
			if ((*str > 31 && *str < 127))
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
	char string[] = "Hello World!";
	int result = ft_str_is_printable(string);

	if(result == 1) {
		printf("The string contains only printable characters.");
	} else {
		printf("The string contains non-printable characters.");
	}
}
*/