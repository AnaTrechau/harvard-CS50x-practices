#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Loop that checks if we have 2 command-line arguments (2 because 1 is for ./ceaesar and the second slot is for the key).
    while (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Loop that forces the user to input a number as a command-line argument. This checks every character on argv[1] (like a string inside a string).
    int argvlen = strlen(argv[1]);
    for (int i = 0; i < argvlen; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //Variable definition:
    int key = atoi(argv[1]);
    int len;
    int rotate(char c, int key);
    string message;

    // Gets the unciphered string
    message = get_string("plaintext: ");

    //Loop that prints each cyphered character on the screen used rotate function.
    printf("ciphertext: ");

    len = strlen(message);
    {
        for (int j = 0; j < len; j++)
        {
            message[j] = rotate(message[j], key);
            printf("%c", message[j]);
        }
    }
    printf("\n");
    return 0;
}



// Rotate function: Checks if a character is alphabetic. If true, it convertes the ASCII character to it´s alphabetical position, aplies the algorithm and then reconverts to ASCII.
int rotate(char c, int key)
{
    int cichar = '\0';
    if (isalpha(c))
    {
        // Convertion for upper characters
        if (isupper(c))
        {
            c = c - 'A';
            cichar = (c + key) % 26;
            cichar += 'A';
        }
        // Convertion for lower characters
        else if (islower(c))
        {
            c = c - 'a';
            cichar = (c + key) % 26;
            cichar += 'a';
        }
    }
    // If character is not alphabetical, it stays the same.
    else
    {
        cichar = c;
    }
    return cichar;
}


