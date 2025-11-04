/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:29:10 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/04 14:33:46 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	return	(nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	ft_recursive_factorial(5);
	return (0);
}