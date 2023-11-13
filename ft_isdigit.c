/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:32:20 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/02 21:02:32 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);

	else
		return (0);
}

int main()
{
	char c = 65;

	printf("mine func otpt: %d\n", ft_isdigit(c));
	printf("std func otpt: %d", isdigit(c));
	return 0;

}
