

                    // Amadou Arifa Arifa Mamane

    //Logical operators
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


    //initializing arrays
int main(int argc, string argv[])

{

    // checking arguments

    if (argc != 2)
    {
        //When error done to tell the user to go back an put the key just after the file name after the workspace

        printf("Go back after ./caesar put the key value \n");
        return 1;
    }

    // converting the key into an integar

    int key = atoi(argv[1]);

    // Prompting the user to put the Input

    string a= get_string("My input: ");

    //Printing the output

    printf("The output: ");



    // looping the plaintext letter by letter

    for (int i = 0, n = strlen(a) ; i < n; i++)

    {
        // condition if lowercase or not
        if (a[i] >= 'a' && a[i] <= 'z')

        {
            // printing out the condition lowercase
            printf("%c", (((a[i] - 'a') + key) % 26) + 'a');
        }

        //condition if not lowercase
        else if (a[i] >= 'A' && a[i] <= 'Z')

        {
            // printing out the condition not lowecase. Means the uppercase
            printf("%c", (((a[i] - 'A') + key) % 26) + 'A');
        }

        //condition if not both of them

        else

        {
            printf("%c", a[i]);
        }

    }

    //printing the final output or the ciphertext

    printf("\n");
     return 0;
}