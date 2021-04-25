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
	char	*help;
	char	*save;

	save = (char *)haystack;
	help = (char *)needle;
	while (haystack && (*haystack || (!*haystack && !*needle)) && len)
	{
		if (*haystack == *help || !*help)
		{
			save = (char *)haystack;
			while (*haystack == *help && len && *haystack)
			{
				help++;
				haystack++;
				len--;
			}
			if (!*help)
				return (save);
			help = (char *)needle;
		}
		haystack++;
		if (len)
			len--;
	}
	return (NULL);
}

// TODO: NEED CHECK

// int	main()
// {
// 	char *s_src = "djfafd";
// 	char *needle = "";
// 	// char *res, *res;

// 	// int t = 1;
// 	// for (int i = -10; i < 200; i++)
// 	// {
// 	// 	res = ft_strrchr(s_src, i);
// 	// 	res2 = strrchr(s_src, i);
// 	// 	t *= res == res2;
// 	// 	printf("%s\t", res);
// 	// 	printf("%s\n", res2);
// 	// }
// 	// printf("%d\n", t);
// 	printf("%s\n", ft_strnstr(s_src, needle, 3));
// 	printf("%s\n", strnstr(s_src, needle, 3));
// }
