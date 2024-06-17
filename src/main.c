/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "main.h"

int main(int argc, char const **argv)
{
    if (argc != 1 || argv[1] != NULL)
        return KO;
    return my_rpg();
}
