/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:26:14 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/03 18:33:30 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int arg)
{
	if(arg >= 32 && arg <= 126)
		return (1);

	else 
		return (0);
}

int main()
{
	char c = 32;
	printf("my func otpt: %d\n", ft_isprint(c));
	printf("std func otpt: %d", isprint(c));
	return 0;

}
