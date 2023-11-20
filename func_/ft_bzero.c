/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:21:53 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/16 14:20:41 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	ft_bzero(void *s, size_t n_bytes)
{
	unsigned char *str = (unsigned char *)s;

	while(n_bytes)
	{
		*str = '\0';
		n_bytes--;
		str++;
	}
}

#include <stdlib.h> // for malloc function

int	main(void)
{

    // Test 1: Basic test with a string
    char str1[] = "Hello, World!";
    ft_bzero(str1, 5);
    printf("Test 1: ft_bzero - '%s'\n", str1);

    // Test 1 Standard: Using bzero for comparison
    char str1_std[] = "Hello, World!";
    bzero(str1_std, 5);
    printf("Test 1 Standard: bzero - '%s'\n\n", str1_std);

    // Test 2: Testing with an integer array
    int arr[] = {1, 2, 3, 4, 5};
    ft_bzero(arr, sizeof(arr));
    printf("Test 2: ft_bzero - [%d, %d, %d, %d, %d]\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

    // Test 2 Standard: Using bzero for comparison
    int arr_std[] = {1, 2, 3, 4, 5};
    bzero(arr_std, sizeof(arr_std));
    printf("Test 2 Standard: bzero - [%d, %d, %d, %d, %d]\n\n", arr_std[0], arr_std[1], arr_std[2], arr_std[3], arr_std[4]);

    // Test 4: Testing with an empty string
    char empty_str[] = "";
    ft_bzero(empty_str, 0);
    printf("Test 4: ft_bzero - '%s'\n", empty_str);

    // Test 4 Standard: Using bzero for comparison
    char empty_str_std[] = "";
    bzero(empty_str_std, 0);
    printf("Test 4 Standard: bzero - '%s'\n\n", empty_str_std);

    // Test 5: Testing with a large array
    long large_arr[100];
    ft_bzero(large_arr, sizeof(large_arr));
    printf("Test 5: ft_bzero - [%ld, %ld, %ld, ...]\n", large_arr[0], large_arr[1], large_arr[2]);

    // Test 5 Standard: Using bzero for comparison
    long large_arr_std[100];
    bzero(large_arr_std, sizeof(large_arr_std));
    printf("Test 5 Standard: bzero - [%ld, %ld, %ld, ...]\n\n", large_arr_std[0], large_arr_std[1], large_arr_std[2]);

    return 0;

}
