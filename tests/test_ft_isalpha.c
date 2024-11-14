/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:36:20 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/14 17:53:53 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test_ft_isalpha.c
#include "../libft.h"
#include "test_utils.h"


int test_ft_isalpha() {
    int result = 0;
    int test_num = 1;

    // Test uppercase letter
    int expected = 2;
    int got = ft_isalpha('A');
    CHECK_PASS(got == expected, test_num++, "ft_isalpha('A')", expected, got);
    if (got != expected) result = 1;

    // Test another uppercase letter
    got = ft_isalpha('Z');
    CHECK_PASS(got == expected, test_num++, "ft_isalpha('Z')", expected, got);
    if (got != expected) result = 1;

    // Test lowercase letter
    got = ft_isalpha('m');
    CHECK_PASS(got == expected, test_num++, "ft_isalpha('m')", expected, got);
    if (got != expected) result = 1;

    // Test number
    expected = 0;
    got = ft_isalpha('5');
    CHECK_PASS(got == expected, test_num++, "ft_isalpha('5')", expected, got);
    if (got != expected) result = 1;

    // Test special character
    got = ft_isalpha('#');
    CHECK_PASS(got == expected, test_num++, "ft_isalpha('#')", expected, got);
    if (got != expected) result = 1;

    return result;
}

int main() {
    int result = test_ft_isalpha();
    if (result == 0) {
        printf("Pass Function: ft_isalpha()\n");
    } else {
        printf("Some tests failed for ft_isalpha().\n");
    }
    return result;
}

