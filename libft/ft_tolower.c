/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:28:31 by ouboukou          #+#    #+#             */
/*   Updated: 2024/06/28 16:56:05 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (arg + 32);
	else
		return (arg);
}
