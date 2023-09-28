/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:14 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/28 13:22:12 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*  int main() {
	char source[] = "Hello World!";
	char destination[50];
	int n = 4;

	ft_strncpy(destination, source, n);

	printf("Number of characters to be copied: %d\n", n);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
} */
