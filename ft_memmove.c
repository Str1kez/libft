/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:29:40 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/26 20:29:43 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*help_dst;
	unsigned char	*help_src;

	help_dst = (unsigned char *) dst;
	help_src = (unsigned char *) src;
	while (len)
	{
		*help_dst = *help_src;
		help_dst++;
		help_src++;
		len--;
	}
	return (dst);
}

// int main()
// {
// 	char buf[20]; // = {'a', 'b', '1'};
// 	char *str = "let's go";
// 	// ft_memset(buf, '\0', 20);
// 	printf("%p\n", memmove(buf, str, 10));
// 	printf("%s\n", buf);
// 	memccpy(buf, "", ' ', 20);
// 	printf("%s\n", buf);
// 	printf("%p\n", ft_memmove(buf, str, 10));
// 	printf("%s\n", buf);
// 	// ft_memset(buf, 52, 20);
// 	// printf("%d\n", buf[0]);
// }
