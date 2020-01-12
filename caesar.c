#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // check how many arguments and if the are numbers.
    // If not number or more than 2 arguments, stop. Else proceeds.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    
    // declaration of variables for key and final encrypted text
    int k = atoi(argv[1]);
    int ciphertext;

    // if key is bigger than 26, use the remainder to keep through the alphabet
    if (k >= 26)
    {
        k = k % 26;
    }

    // user input for text to be encrypted
    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    // iteration through the letters of the text for encryptation
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // attribution of previously declared variable, since now the variable i exists
        ciphertext = plaintext[i] + k;

        // if the letter goes over uppercased Z, go through the alphabet
        if (isupper(plaintext[i]) && ciphertext > 90)
        {
            ciphertext = ciphertext - 26;
        }

        // if the letter goes over lowercased z, go through the alphabet
        else if (islower(plaintext[i]) && ciphertext > 122)
        {
            ciphertext = ciphertext - 26;
        }

        // if it's an alphabet letter, print the result of the encrypted
        // message
        if (isalpha(plaintext[i]))
        {
            printf("%c", ciphertext);
        }

        // if not, print the character as it is
        else
        {
            printf("%c", plaintext[i]);
        }

    }

    printf("\n");
}
