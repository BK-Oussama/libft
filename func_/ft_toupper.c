/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:14:01 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/17 17:27:18 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int ft_toupper(int arg)
{
	if (arg >= 97  && arg <= 122)
	{
		return (arg - 32);
	}
	else
	return arg;
}


int main() {
    // Test Case 1: Uppercase letter
    char test_char1 = 'A';
    int result1_ft = ft_toupper(test_char1);
    int result1_std = toupper(test_char1);
    printf("Test Case 1: %c - ft_toupper: %c, toupper: %c\n", test_char1, result1_ft, result1_std);

    // Test Case 2: Lowercase letter
    char test_char2 = 'z';
    int result2_ft = ft_toupper(test_char2);
    int result2_std = toupper(test_char2);
    printf("Test Case 2: %c - ft_toupper: %c, toupper: %c\n", test_char2, result2_ft, result2_std);

    // Test Case 3: Non-alphabetic character
    char test_char3 = '7';
    int result3_ft = ft_toupper(test_char3);
    int result3_std = toupper(test_char3);
    printf("Test Case 3: %c - ft_toupper: %c, toupper: %c\n", test_char3, result3_ft, result3_std);

    // Test Case 4: Space character
    char test_char4 = ' ';
    int result4_ft = ft_toupper(test_char4);
    int result4_std = toupper(test_char4);
    printf("Test Case 4: %c - ft_toupper: %c, toupper: %c\n", test_char4, result4_ft, result4_std);

    // Test Case 5: Special character
    char test_char5 = '$';
    int result5_ft = ft_toupper(test_char5);
    int result5_std = toupper(test_char5);
    printf("Test Case 5: %c - ft_toupper: %c, toupper: %c\n", test_char5, result5_ft, result5_std);

    return 0;
}

