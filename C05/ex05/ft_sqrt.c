/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:17:46 by fromano           #+#    #+#             */
/*   Updated: 2022/02/24 11:18:46 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recsqrt(int nb, int square)
{
	int	n;

	n = square * square;
	if (n == nb)
		return (square);
	else if (n > nb)
		return (0);
	else
		return (recsqrt(nb, square + 1));
}

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = recsqrt(nb, 1);
	return (sqrt);
}
