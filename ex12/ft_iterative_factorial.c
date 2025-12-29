/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:05:57 by elbarry           #+#    #+#             */
/*   Updated: 2025/12/29 15:14:25 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
