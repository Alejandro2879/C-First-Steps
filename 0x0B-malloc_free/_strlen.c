#include "holberton.h"

/**
 * _strlen - Return the lenght of a string.
 * @str: String to count.
 * Return: Number of characters in str..
 */

int _strlen(char *str)
{
        int iter = 0;

        while (str[iter])
                iter++;
        return (iter);
}
