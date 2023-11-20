/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:09:01 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/15 21:05:01 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memset(void *s, int value, size_t n_byt)
{
	value = (unsigned char)value;
	unsigned char *str = (unsigned char *)s;
	
	while (n_byt)
	{
		*str = value;
		n_byt--;
		str++;
	}
	return s;
}

int main() {
    //char str[20];
    //char stdStr[20];
//     char *result;
//     char *stdResult;

//     Test 1: Basic usage
//    result = (char *)ft_memset(str, 'A', 10);
//    stdResult = (char *)memset(stdStr, 'A', 10);
//    printf("Test 1: String after ft_memset: %s\n", str);
//     printf("Result pointer (ft_memset): %p\n", (void *)result);
//     printf("String after memset: %s\n", stdStr);
//    printf("Result pointer (memset): %p\n", (void *)stdResult);

//     Test 2: Setting part of a string
//    char text[] = "Hello, World!";
//     char stdText[] = "Hello, World!";
//    ft_memset(text + 7, '*', 5);
//    memset(stdText + 7, '*', 5);
//    printf("\nTest 2: String after ft_memset: %s\n", text);
//     printf("String after memset: %s\n", stdText);

    // Test 3: Setting overlapping memory regions
    char overlap[20] = "OverlappingTest";
    char stdOverlap[20] = "OverlappingTest";
    ft_memset(overlap + 5, 'X', 8);
    memset(stdOverlap + 5, 'X', 8);
    printf("\nTest 3: String after ft_memset: %s\n", overlap);
    printf("String after memset: %s\n", stdOverlap);

    // Test 4: Setting with zero length
    char zeroLength[10] = "Test";
    char stdZeroLength[10] = "Test";
    ft_memset(zeroLength, 'Z', 1);
    memset(stdZeroLength, 'Z', 1);
    printf("\nTest 4: String after ft_memset: %s\n", zeroLength);
    printf("String after memset: %s\n", stdZeroLength);
   
    // Test 5: Integer array
    int arr_num[3] = {33, 1555874, 0};
    int arr_num0[3] = {33, 1555874, 0};
    
    ft_memset(arr_num + 1, '/', 1);
    memset(arr_num0 + 1, '/', 1);

    printf("\nTest 5: Array after ft_memset: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", arr_num[i]);
    }
    printf("\n");

    printf("Test 5: Array after memset: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", arr_num0[i]);
    }
    printf("\n");
   
    return 0;
}
