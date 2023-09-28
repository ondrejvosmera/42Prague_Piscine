/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sort_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:30:44 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 15:41:01 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_compare(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_sort(int size, char *arr[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (str_compare(arr[i], arr[j]) > 0)
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	ft_sort(argc, argv);
	if (argc > 0)
	{
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			while (*str != '\0')
			{
				write(1, str, 1);
				str++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
