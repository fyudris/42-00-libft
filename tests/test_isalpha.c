/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:16:36 by fyudris           #+#    #+#             */
/*   Updated: 2024/12/03 23:56:13 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

// Function to test ft_isalpha
void test_isalpha()
{
    printf("\n=== Testing ft_isalpha ===\n\n");

    // Define test values: edge cases, typical inputs, and invalid inputs
    int test_values[] = {
        'A', 'Z', 'a', 'z',       // Valid alphabetic characters
        '0', '9',                 // Digits (should return 0)
        '@', '[', '`', '{',       // Characters around alphabetic ranges
        '\n', '\t', ' ',          // Control and whitespace characters
        EOF,                      // End of file indicator
        -1, 128,                  // Out-of-bound ASCII values
        0                         // Null character
    };
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    // Iterate through test values and compare ft_isalpha with isalpha
    for (int i = 0; i < num_tests; i++)
    {
        int test_char = test_values[i];
        int expected = isalpha(test_char);    // Reference result
        int result = ft_isalpha(test_char);   // Test function result

        // Format the test case description
        char test_name[50];
        if (test_char >= 32 && test_char <= 126)
            snprintf(test_name, sizeof(test_name), "ft_isalpha('%c') [ASCII %d]", test_char, test_char);
        else
            snprintf(test_name, sizeof(test_name), "ft_isalpha([ASCII %d])", test_char);

        // Use utility function to print results
        test_result(test_name, result, expected);
    }

    printf("\n=== End of ft_isalpha tests ===\n");
}

#ifdef MAIN
int main()
{
    test_isalpha();
    return 0;
}
#endif
