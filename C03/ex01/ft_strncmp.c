/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:54:17 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/14 16:42:42 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

// int main() {

//	char string1[] = "Hello World";
//	char string2[] = "Hello World";
//	int num = 4;
//	int result = ft_strncmp(string1, string2, num);
//
//	if (result < 0) {
//        printf("First %d characters of %s are less than
// %s\n", num, string1, string2);
//   } else if (result > 0) {
//        printf("First %d characters of %s are greater than
// %s\n", num, string1, string2);
//    } else {
//        printf("First %d characters of %s are equal to
// %s\n", num, string1, string2);
//    }
//}
