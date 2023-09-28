/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:37:19 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/17 16:50:08 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	int				i;
	int				j;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main() {
  char str1[20] = "Hello";
  char str2[] = "World!";
  int n = 4;

    ft_strncat(str1, str2, n);

    printf("%s\n", str1);
} */
