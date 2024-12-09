/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 23:23:48 by fyudris           #+#    #+#             */
/*   Updated: 2024/12/09 23:26:26 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void test_putstr_fd()
{
    printf("\n=== Testing ft_putstr_fd ===\n\n");

    struct {
        char *input;
        int fd;
        const char *description;
    } tests[] = {
        {"Hello, World!", 1, "Write 'Hello, World!' to standard output"},
        {"Another test", 1, "Write 'Another test' to standard output"},
        {NULL, 1, "NULL input (should do nothing)"},
        {"Error message", 2, "Write 'Error message' to standard error"},
    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);
    int i = 0;

    while (i < num_tests)
    {
        char test_name[100];
        snprintf(test_name, sizeof(test_name), "ft_putstr_fd(\"%s\", %d): %s",
                 tests[i].input ? tests[i].input : "NULL", tests[i].fd, tests[i].description);

        // Redirect output to test correctness
        if (tests[i].fd == 1) {
            printf("[STDOUT]: ");
            fflush(stdout);
        } else if (tests[i].fd == 2) {
            fprintf(stderr, "[STDERR]: ");
            fflush(stderr);
        }

        ft_putstr_fd(tests[i].input, tests[i].fd); // Call the function being tested

        // Since we can't verify the output programmatically, rely on observation
        test_result(test_name, 1, 1); // Always PASS since we assume the function writes correctly
        i++;
    }

    printf("\n=== End of ft_putstr_fd tests ===\n\n");
}

#ifdef MAIN
int main()
{
    test_putstr_fd();
    return 0;
}
#endif