/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:16:16 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/25 12:01:09 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total_length += ft_strlen(sep);
		}
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	int		total_length;
	int		i;

	i = 0;
	total_length = ft_total_len(size, strs, sep);
	if (size == 0)
	{
		final_str = malloc(sizeof(char));
		return (final_str);
	}
	final_str = malloc(sizeof(char) * (total_length));
	while (i < size)
		final_str[i++] = 0;
	i = 0;
	while (i < size)
	{
		final_str = ft_strcat(final_str, strs[i]);
		if (i < size - 1)
			final_str = ft_strcat(final_str, sep);
		i++;
	}
	return (final_str);
}

/* int main()
{
	char *strs[] = {"Hello", "World", "pleasework"};
	char *sep = " - ";
	int size = 3;
	char *result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	return 0;
} */
