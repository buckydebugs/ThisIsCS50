#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
    
 bool key_validity(string s);

int main(int argc, string argv[])
{
    if ( argc !=2 || key_validity(argv[1]))
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    int key = atoi(argv[1]); //converts to int from string
    
    string plain_text = get_string("plaintext: ");
    printf("ciphertext: ");

    for(int i=0,n= strlen(plain_text); i <n; i++)
    {
        char x = plain_text[i];
        if (isalpha(x))
        {
            char change = 'A';
            if (islower(c))
            change = 'a';
            printf("%c", (x - change + key) % 26 + change);
        }
        else 
        printf("%c, x");
    }
    printf("\n");


}
 bool key_validity(string s);
 {
     for (int i = 0, n = strlen(s); i < n; i++)
     if(!isdigit(s[i]))
     {
         return false;
     }
     else 
     return true;
 }