/*
** EPITECH PROJECT, 2024
** unit_test
** File description:
** unit_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "main.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
}

Test(nom_function, basic_test)
{
    cr_assert_eq((1 + 1), 2);
}

