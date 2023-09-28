/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:41:45 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/24 17:15:21 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

/* int main()
{
	int min = 3;
	int max = 8;
	int *range;
	int result = ft_ultimate_range(&range, min, max);
	printf("%d\n", result);
	return 0;
} */
