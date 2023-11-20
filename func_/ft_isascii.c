/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:31:44 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/03 17:50:30 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int arg)
{
	if(arg >= 0 && arg <= 127)
		return (1);

	else
		return (0);
}

int	main()
{
	char s  = 127;

	printf("my func otpt:%d \n", ft_isascii(s));
	printf("std func otpt:%d", isascii(s));
	return 0;

}
