#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //get key from user
            if (argc == 2)
            {
                string key = argv[1];


                for (int i = 0; i < strlen(key); i++)
                {
                    if (isupper(key[i]))
                    {
                       int ascii = (int) key[i];

                       int add = ascii - 65;

                       printf("%i ", add);

                    }
                    else
                    {
                        int ascii = (int) key[i];

                        int add = ascii - 97;

                        printf("%i ", add);
                    }
                }




            }
            else
            {
                printf("error\n");
                return 1;

            }




    //check if key is alphabetic

    //get length of string


    //get plaintext

    //encipher

    //encipher single letter

    //print ciphertext
    return 0;

}
