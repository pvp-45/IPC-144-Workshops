/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  :Pruthvi Patel
Student ID#:170733216
Email      :ppatel450@myseneca.ca
Section    :NHH
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int number;
    char letter;
    int count;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");





    do {

        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &letter, &number);

    

        if (letter == 'Q' && number == 0)

        {
            printf("\n");
            printf("+--------------------+\n");
            printf("Loop application ENDED\n");
            printf("+--------------------+\n");
        }

        else if (letter == 'Q')
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n\n");


        }

        else if ((number < 3 || number > 20) && (letter=='W'||letter=='F'||letter=='D'))
        {

            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");

        }



        else if (letter == 'W')
        {
            printf("WHILE   : ");
            count = 1;
            while (count <= number)
            {
                printf("W");
                count++;
            }
            printf("\n\n");
        }

        else if (letter == 'D')
        {
            printf("DO-WHILE: ");
            count = 1;
            do {

                printf("D");
                count++;


            } while (count <= number);
            printf("\n\n");
        }

        else if (letter == 'F')
        {
            printf("FOR     : ");
            for (count = 1; count <= number; count++)
            {
                printf("F");

            }
            printf("\n\n");

        }
     
        else
           {
              printf("ERROR: Invalid entered value(s)!\n\n");
            }


       
    } while (letter != 'Q' || number != 0);

    return 0;
}