#include <stdio.h>
/**
 * main _ Entry point
 * description:  'program that prints the alphabet in lowercase, and then in uppercase, followed by a new line'
 * Return: Always 0
 */
int main(void)
{	
    // print lowercase alphabet
    for (char c = 'a'; c <= 'z'; c++) {
        putchar(c);
    }

    // print uppercase alphabet
    for (char c = 'A'; c <= 'Z'; c++) {
        putchar(c);
    }

    // print new line
    putchar('\n');

    return 0;
}
