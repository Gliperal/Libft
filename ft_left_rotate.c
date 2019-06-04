/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:19:59 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/06/01 14:23:31 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_left_rotate(unsigned int n, int dist)
{
	return ((n << dist) | (n >> (32 - dist)));
}