/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:46:43 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/24 17:15:05 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dynamic_array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	dynamic_array = malloc((max - min) * sizeof(int));
	if (dynamic_array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		dynamic_array[i] = min;
		i++;
		min++;
	}
	return (dynamic_array);
}

/* int main()
{
	int min = -8;
	int max = -3;
	int *result = ft_range(min, max);

	if (result != NULL)
	{
		int i = 0;
		while (i < max - min)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}
	else if (result == -1)
	{
		printf("Error: Memory allocation failed\n");
	}
	else
	{
		printf("Error: Invalid input\n");
	}
}
 */
