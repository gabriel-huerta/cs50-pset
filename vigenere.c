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

            //get the length of the key
                string key = argv[1];

                int k = strlen(key);
            //check if key is alphabetic
            for (int i = 0; i < k; i++)
            {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must be alphabetic chars only\n");

                return 1;
            }
            }

                //get plaintext
                string plaintext = get_string("plaintext: " );

                //get length of string
                int p = strlen(plaintext);

                printf("ciphertext: ");

                //encipher single letter


                for (int i = 0, j = 0; i < p; i++, j++)
                {

                //if alphabetic
                 if (isalpha(plaintext[i]))
                 {

                    if (j % k == 0)
                    {
                        j = 0;
                    }
                     //if uppercase letter
                    if (isupper(plaintext[i]))
                    {

                        int asciip = (int) plaintext[i];

                        int asciik = (int) key[j];

                        if (asciik >= 97)
                        {
                            asciik = asciik - 32;
                        }

                        //print ciphertext
                        printf("%c", (char) (((asciip - 65) + (asciik - 65) ) % 26 ) + 65);

                    }
                    else if (islower(plaintext[i]))
                    {
                        int asciip = (int) plaintext[i];

                        int asciik = (int) key[j];

                        if (asciik >= 97)
                        {
                            asciik = asciik - 32;
                        }

                        //print ciphertext
                        printf("%c", (char) (((asciip - 97) + (asciik - 65) ) % 26 ) + 97);
                    }

                }
                else
                {
                    j--;
                    printf("%c", plaintext[i]);
                }

                }

            }
                else
            {
                printf("Error");
                return 1;
            }


    printf("\n");
    return 0;



}
