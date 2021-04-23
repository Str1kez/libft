/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:41:23 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 15:41:26 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*help;
	char	*start;
	size_t	max;
	size_t	current;

	start = (char *)needle;
	help = NULL;
	max = 0;
	current = 0;
	while (*haystack)
	{
		if (*start == *haystack)
		{
			current++;
			if (current > max)
			{
				max = current;
				help = (char *)haystack - max + 1;
			}
			if (max == len)
				return (help);
			start++;
		}
		else if (current)
		{
			current = 0;
			start = (char *)needle;
		}
		haystack++;
	}
	return (help);
}

// TODO: Doesn't work correctly

int	main()
{
	char *s_src = "r43trebvabh5rebva";
	char *needle = "rebva";
	// char *res, *res;

	// int t = 1;
	// for (int i = -10; i < 200; i++)
	// {
	// 	res = ft_strrchr(s_src, i);
	// 	res2 = strrchr(s_src, i);
	// 	t *= res == res2;
	// 	printf("%s\t", res);
	// 	printf("%s\n", res2);
	// }
	// printf("%d\n", t);
	printf("%s\n", ft_strnstr(s_src, needle, 5));
}
