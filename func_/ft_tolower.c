/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:28:31 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/17 17:37:57 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int ft_tolower(int arg)
{

	if (arg >= 65  && arg <= 90)
	{
		return (arg + 32);
	}
	else
	return arg;

}

int main() {
    // Test Case 1: Lowercase letter
    char test1 = 'a';
    int result1_ft = ft_tolower(test1);
    int result1_std = tolower(test1);
    printf("Test Case 1: %c -> ft_tolower: %c, tolower: %c\n", test1, result1_ft, result1_std);

    // Test Case 2: Uppercase letter
    char test2 = 'Z';
    int result2_ft = ft_tolower(test2);
    int result2_std = tolower(test2);
    printf("Test Case 2: %c -> ft_tolower: %c, tolower: %c\n", test2, result2_ft, result2_std);

    // Test Case 3: Non-alphabetic character
    char test3 = '1';
    int result3_ft = ft_tolower(test3);
    int result3_std = tolower(test3);
    printf("Test Case 3: %c -> ft_tolower: %c, tolower: %c\n", test3, result3_ft, result3_std);

    // Test Case 4: Space character
    char test4 = ' ';
    int result4_ft = ft_tolower(test4);
    int result4_std = tolower(test4);
    printf("Test Case 4: %c -> ft_tolower: %c, tolower: %c\n", test4, result4_ft, result4_std);

    // Test Case 5: Special character
    char test5 = '$';
    int result5_ft = ft_tolower(test5);
    int result5_std = tolower(test5);
    printf("Test Case 5: %c -> ft_tolower: %c, tolower: %c\n", test5, result5_ft, result5_std);

    // Add more test cases as needed

    return 0;
}

