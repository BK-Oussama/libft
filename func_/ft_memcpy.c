/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:45:53 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/16 16:11:08 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n_bytes)
{
	
	unsigned char *dest_d = (unsigned char *)dest;
	unsigned const char *src_s = (unsigned char *)src;
	
	while (n_bytes)
	{
		*dest_d = *src_s;
		dest_d++;
		src_s++;
		n_bytes--;
	}

	return dest;	
}

int main() {
    // Test Case 1: Copying characters from src to dest
    char dest1_ft[10] = "abcdefghi";
    char dest1_std[10] = "abcdefghi";
    const char src1[5] = "12345";
    size_t n1 = 5;

    printf("Test Case 1:\n");
    printf("Before ft_memcpy: dest1_ft = %s\n", dest1_ft);
    printf("Before ft_memcpy: src1  = %s\n", src1);

    ft_memcpy(dest1_ft, src1, n1);

    printf("After ft_memcpy : dest1_ft = %s\n", dest1_ft);
    printf("----------------------------------------\n");

    // Output for standard memcpy
    printf("Before memcpy   : dest1_std = %s\n", dest1_std);
    memcpy(dest1_std, src1, n1);
    printf("After memcpy    : dest1_std = %s\n", dest1_std);
    printf("----------------------------------------\n");

    // Test Case 2: Copying integers from src to dest
    int dest2_ft[4] = {1, 2, 3, 4};
    int dest2_std[4] = {1, 2, 3, 4};
    const int src2[4] = {5, 6, 7, 8};
    size_t n2 = 4 * sizeof(int);

    printf("Test Case 2:\n");
    printf("Before ft_memcpy: dest2_ft = {%d, %d, %d, %d}\n", dest2_ft[0], dest2_ft[1], dest2_ft[2], dest2_ft[3]);
    printf("Before ft_memcpy: src2  = {%d, %d, %d, %d}\n", src2[0], src2[1], src2[2], src2[3]);

    ft_memcpy(dest2_ft, src2, n2);

    printf("After ft_memcpy : dest2_ft = {%d, %d, %d, %d}\n", dest2_ft[0], dest2_ft[1], dest2_ft[2], dest2_ft[3]);
    printf("----------------------------------------\n");

    // Output for standard memcpy
    printf("Before memcpy   : dest2_std = {%d, %d, %d, %d}\n", dest2_std[0], dest2_std[1], dest2_std[2], dest2_std[3]);
    memcpy(dest2_std, src2, n2);
    printf("After memcpy    : dest2_std = {%d, %d, %d, %d}\n", dest2_std[0], dest2_std[1], dest2_std[2], dest2_std[3]);
    printf("----------------------------------------\n");

    // Test Case 3: Copying mixed types from src to dest
    struct {
        int a;
        char b;
        double c;
    } dest3_ft, dest3_std, src3;

    src3.a = 42;
    src3.b = 'X';
    src3.c = 3.14;

    printf("Test Case 3:\n");
    printf("Before ft_memcpy: dest3_ft = {%d, %c, %lf}\n", dest3_ft.a, dest3_ft.b, dest3_ft.c);
    printf("Before ft_memcpy: src3  = {%d, %c, %lf}\n", src3.a, src3.b, src3.c);

    ft_memcpy(&dest3_ft, &src3, sizeof(src3));

    printf("After ft_memcpy : dest3_ft = {%d, %c, %lf}\n", dest3_ft.a, dest3_ft.b, dest3_ft.c);
    printf("----------------------------------------\n");

    // Output for standard memcpy
    printf("Before memcpy   : dest3_std = {%d, %c, %lf}\n", dest3_std.a, dest3_std.b, dest3_std.c);
    memcpy(&dest3_std, &src3, sizeof(src3));
    printf("After memcpy    : dest3_std = {%d, %c, %lf}\n", dest3_std.a, dest3_std.b, dest3_std.c);
    printf("----------------------------------------\n");

    return 0;
}

