/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirkim <kirkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:05:33 by kirkim            #+#    #+#             */
/*   Updated: 2020/12/28 15:39:55 by kirkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t num)
{
	size_t				i;
	unsigned char		*dp;
	const unsigned char *sp;

	dp = dst;
	sp = src;
	i = 0;
	if (!dp && !sp)
		return (0);
	while (i < num)
	{
		dp[i] = sp[i];
		if (sp[i] == (unsigned char)c)
			return (dp + i + 1);
		i++;
	}
	return (0);
}
