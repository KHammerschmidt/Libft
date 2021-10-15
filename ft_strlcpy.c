/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:46:50 by khammers          #+#    #+#             */
/*   Updated: 2021/08/05 13:36:11 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
**
** The function ft_strlcpy() copies up to dstsize - 1 characters from string
** src to dst, NUL terminating dst if dstsize is not 0. Room for the null
** termination should be included in dstsize. The function returns the length
** of the string it tried to create (ft_strlen(src)). If this return value is
** larger than dstsize, once knows that the dst string has been truncated.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
