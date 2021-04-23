/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:41:30 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/23 14:41:41 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	res;

	res = 0;
	while (*dst)
	{
		res++;
		dst++;
	}
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

// TODO : Check empty string

// int	main()
// {
// 	char *s_src = "55rwfwefr434343334r2";
// 	char buf[20] = {'\0'};
// 	char buf2[20] = {'\0'};
// 	size_t result;

// 	result = ft_strlcat(buf, s_src, sizeof(buf));
// 	printf("%lu\n", result);
// 	result = strlcat(buf2, s_src, sizeof(buf2));
// 	printf("%lu\n", result);
// 	printf("%s\n", buf);
// 	printf("%s\n", buf2);
// 	printf("%d\n", strcmp(buf, buf2));
// }
