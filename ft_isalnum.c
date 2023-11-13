/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:10:16 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/02 21:28:54 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int arg)
{
	if((arg >= '0' && arg <= '9') || (arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
		return (1);

	else
		return (0);
}

int	main()
{
	char c = '+';
	printf("my func otpt: %d\n", ft_isalnum(c));
	printf("std func otpt: %d", isalnum(c));
	return 0;
}
