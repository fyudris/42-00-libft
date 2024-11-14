/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:35:35 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/14 17:36:11 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <stdio.h>

#define CHECK_PASS(condition, test_num, func_call, expected, got) \
    if (condition) { \
        printf("✅ [%d] %s Expected %d got %d\n", test_num, func_call, expected, got); \
    } else { \
        printf("❌ [%d] %s Expected %d got %d\n", test_num, func_call, expected, got); \
    }

#endif // TEST_UTILS_H

