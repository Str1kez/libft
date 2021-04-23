/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:49:21 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/16 18:49:23 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && n > 1)
	{
		n--;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int main()
// {
//     char *s1 = "fsfds";
//     char *s2 = "sfafs";
//     printf("%d\n", ft_strncmp(s1, s2, 1));
//     printf("%d", strncmp(s1, s2, 1));
//     return (0);
// }
