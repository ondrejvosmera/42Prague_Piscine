/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:49:09 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/17 16:42:11 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main() {
    char str[] = "Hello, World! This is an example.";
    char to_find[] = "World";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("'%s' found at index %ld\n", to_find, result - str);
    } else {
        printf("'%s' not found\n", to_find);
    }
} */
