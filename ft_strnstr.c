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
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;

	counter = 0;
	if (!*needle)
		return ((char *)haystack);
	while ((*haystack || (!*haystack && !*needle)) && len)
	{
		if (*haystack == *needle || !*needle)
		{
			while (*haystack == *(needle + counter) && len && *haystack)
			{
				haystack++;
				len--;
				counter++;
			}
			if (!*(needle + counter))
				return ((char *)(haystack - counter));
			counter = 0;
		}
		haystack++;
		if (len)
			len--;
	}
	return (NULL);
}

// int	main()
// {
	// char *s1 = "oh no not the empty string !";
	// char *s2 = "";
	// size_t max = 1;
	// char *i1 = strnstr(((void *)0), "fake", 3);
	// char *i2 = ft_strnstr(((void *)0), "fake", 3);
	// printf("%s\n", i1);
	// printf("%s\n", i2);
// }
