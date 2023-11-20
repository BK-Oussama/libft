/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:13:41 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/16 19:42:30 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	
		unsigned char *dest_d = (unsigned char *)dest;
		unsigned const char *src_s = (unsigned const char*)src;
		unsigned char temp[n_bytes];
		size_t i;
		i = 0;
		while( i < n_bytes)
		{
			temp[i] = src_s[i];
			i++;
		}

		i = 0;
		while (i < n_bytes)
		{
			dest_d[i] = temp[i];
			i++;
		}
	return dest;
}
int main() {
    // Test Case 1: Basic scenario with small data
    char test1_src[] = "Hello";
    char test1_dest_ft[10];
    char test1_dest_memmove[10];
    size_t test1_size = 5;

    ft_memmove(test1_dest_ft, test1_src, test1_size);
    memmove(test1_dest_memmove, test1_src, test1_size);

    printf("Test Case 1:\n");
    printf("ft_memmove: \"%s\"\n", test1_dest_ft);
    printf("memmove   : \"%s\"\n\n", test1_dest_memmove);

    // Test Case 2: Overlapping source and destination
    char test2_src[] = "Testing";
    char test2_dest_ft[10];
    char test2_dest_memmove[10];
    size_t test2_size = 7;

    ft_memmove(test2_dest_ft, test2_src + 2, test2_size);
    memmove(test2_dest_memmove, test2_src + 2, test2_size);

    printf("Test Case 2:\n");
    printf("ft_memmove: \"%s\"\n", test2_dest_ft);
    printf("memmove   : \"%s\"\n\n", test2_dest_memmove);

    // Test Case 3: Copying to the same location (no change)
    char test3_src[] = "Same";
    char test3_dest_ft[] = "Same";
    char test3_dest_memmove[] = "Same";
    size_t test3_size = 4;

    ft_memmove(test3_dest_ft, test3_src, test3_size);
    memmove(test3_dest_memmove, test3_src, test3_size);

    printf("Test Case 3:\n");
    printf("ft_memmove: \"%s\"\n", test3_dest_ft);
    printf("memmove   : \"%s\"\n\n", test3_dest_memmove);

    // Test Case 4: Copying from the end of the source to the beginning of the destination
    int test4_src[] = {1, 2, 3, 4, 5};
    int test4_dest_ft[5];
    int test4_dest_memmove[5];
    size_t test4_size = sizeof(test4_src);

    ft_memmove(test4_dest_ft, test4_src + 2, test4_size);
    memmove(test4_dest_memmove, test4_src + 2, test4_size);

    printf("Test Case 4:\n");
    printf("ft_memmove: {%d, %d, %d, %d, %d}\n", test4_dest_ft[0], test4_dest_ft[1], test4_dest_ft[2], test4_dest_ft[3], test4_dest_ft[4]);
    printf("memmove   : {%d, %d, %d, %d, %d}\n\n", test4_dest_memmove[0], test4_dest_memmove[1], test4_dest_memmove[2], test4_dest_memmove[3], test4_dest_memmove[4]);

    return 0;
}

