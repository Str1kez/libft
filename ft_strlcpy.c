/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:55:04 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 13:55:09 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	res;

	res = 0;
	while (*src)
	{
		if (res < dstsize - 1)
		{
			*dst = *src;
			dst++;
		}
		src++;
		res += 1;
	}
	*dst = '\0';
	return (res);
}

// int	main()
// {
// 	char *s_src = "wrw";
// 	char buf[20];
// 	char buf2[20];
// 	size_t result;

// 	result = ft_strlcpy(buf, s_src, sizeof(buf));
// 	printf("%lu\n", result);
// 	result = strlcpy(buf2, s_src, sizeof(buf2));
// 	printf("%lu\n", result);
// 	printf("%s\n", buf);
// 	printf("%s\n", buf2);
// 	printf("%d\n", strcmp(buf, buf2));
// }
