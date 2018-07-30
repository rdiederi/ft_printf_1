/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:27:43 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/15 11:27:45 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (!c)
		return (0);
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' ||
			c == '\f' || c == '\v')
		return (1);
	return (0);
}
