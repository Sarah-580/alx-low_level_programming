#include "main.h"
/**
 * strncat - Concatenates two strings
 * an inputted number of bytes from src
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to e appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int count = 0, count2 = 0;

        while (*(dest + count) != '\0')
        {
                count++;
        }

        while (count2 < n)
        {
                *(dest + count) = *(src + count2);
                if (*(src + count2) == '\0')
                        break;
                count++;
                count2++;
        }
        return (dest);
}
