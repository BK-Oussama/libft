/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:16:00 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/18 20:28:07 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char *ft_strchr(const char *s, int arg)
{
	
 	while (*s && *s != (char)arg)
	{
		s++;
		if (*s == (char)arg)
		{
			return ((char *)s);
		}
	}
	if (*s == (char)arg)
	{
		return((char *)s);
	}
	return (NULL);
}


// Function to compare and print results
void test_strchr(const char *test_name, const char *input, int target_char) {
    // Test your implementation
    char *result_ft = ft_strchr(input, target_char);

    // Test the standard implementation
    char *result_std = strchr(input, target_char);

    // Print the results for analysis
    printf("[%s] Input: \"%s\", Target Char: '%c'\n", test_name, input, target_char);
    printf("Your result:   %p\n", (void *)result_ft);
    printf("Std result:    %p\n", (void *)result_std);

    // Compare results
    if (result_ft == result_std) {
        printf("Result:        Passed\n");
    } else {
        printf("Result:        Failed\n");
    }

    printf("\n");
}

int main() {
    // Test cases
    test_strchr("Test 1", "hello", 'e');
    test_strchr("Test 2", "world", 'd');
    test_strchr("Test 3", "programming", 'g');
    test_strchr("Test 4", "abcdef", 'z');  // Character not in the string
    test_strchr("Test 5", "koll", '\0');       // Empty string
	/*

	char str[] = "My name is oussama";
	char c = '\0';
	printf("Output is: %s", strchr(str, c));
	printf("\nOutput is: %s", ft_strchr(str, c));
	*/	
    return 0;
}
