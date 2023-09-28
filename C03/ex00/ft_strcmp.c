/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:27:11 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/14 16:51:18 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

/* int main() {
	char string1[] = "Hello World";
	char string2[] = "Hello";
	int result = ft_strcmp(string1, string2);

	if (result == 0) {
		printf("The string '%s' is the same as the '%s'", string1, string2);
	} else if (result == -1) {
		printf("The string '%s' is shorther than '%s'", string1, string2);
	} else {
		printf("The string '%s' is longer than '%s'", string1, string2);
	}
} */
