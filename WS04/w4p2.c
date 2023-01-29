/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Pruthvi Patel
Student ID#: 170733216
Email      : ppatel450@myseneca.ca
Section    : NHH
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

    int num_apples, num_oranges, num_pears, num_tomatoes, num_cabbages;
    int num_apples_picked, num_oranges_picked, num_pears_picked, num_tomatoes_picked, num_cabbages_picked;
    int yes_no;
   
    do {
        printf("Grocery Shopping\n");
        printf("================\n");
       
        do
        {
          
            printf("How many APPLES do you need? : ");
            scanf("%d", &num_apples);

            if (num_apples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");

            }

        } while (num_apples < 0);
        printf("\n");

        do
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &num_oranges);

            if (num_oranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");

            }

        } while (num_oranges < 0);
        printf("\n");

        do
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &num_pears);

            if (num_pears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");

            }

        } while (num_pears < 0);
        printf("\n");

        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &num_tomatoes);

            if (num_tomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");

            }

        } while (num_tomatoes < 0);
        printf("\n");

        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &num_cabbages);

            if (num_cabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");

            }

        } while (num_cabbages < 0);
        printf("\n");

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");
        
        
        if (num_apples > 0) {
                do
                {
                
                    printf("Pick some APPLES... how many did you pick? : ");
                    scanf("%d", &num_apples_picked);
                    if (num_apples_picked > num_apples)
                    {
                        printf("You picked too many... only %d more APPLE(S) are needed.\n", num_apples);
                    }

                    else if (num_apples_picked <= 0)
                    {
                        printf("ERROR: You must pick at least 1!\n");

                    }

                    else
                    {
                        num_apples -= num_apples_picked;

                        if (num_apples == 0)
                        {
                            printf("Great, that's the apples done!\n");
                        }

                        else
                        {
                            printf("Looks like we still need some APPLES...\n");

                        }

                    }

                } while (num_apples > 0);
                printf("\n");
            
        }
            
        

        if (num_oranges > 0)
        {
            do
            {
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &num_oranges_picked);
                if (num_oranges_picked > num_oranges)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n", num_oranges);
                }

                else if (num_oranges_picked <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");

                }

                else
                {
                    num_oranges -= num_oranges_picked;

                    if (num_oranges == 0)
                    {
                        printf("Great, that's the oranges done!\n");
                    }

                    else
                    {
                        printf("Looks like we still need some ORANGES...\n");

                    }

                }

            } while (num_oranges > 0);
            printf("\n");
        }
        if (num_pears > 0)
        {
            do
            {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &num_pears_picked);
                if (num_pears_picked > num_pears)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", num_pears);
                }

                else if (num_pears_picked <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");

                }

                else
                {
                    num_pears -= num_pears_picked;

                    if (num_pears == 0)
                    {
                        printf("Great, that's the pears done!\n");
                    }

                    else
                    {
                        printf("Looks like we still need some PEARS...\n");

                    }

                }

            } while (num_pears > 0);

            printf("\n");
        }

        if (num_cabbages > 0)
        {
            do
            {
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &num_cabbages_picked);
                if (num_cabbages_picked > num_cabbages)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n", num_cabbages);
                }

                else if (num_cabbages_picked <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");

                }

                else
                {
                    num_cabbages -= num_cabbages_picked;

                    if (num_cabbages == 0)
                    {
                        printf("Great, that's the cabbages done!\n");
                    }

                    else
                    {
                        printf("Looks like we still need some CABBAGES...\n");

                    }

                }

            } while (num_cabbages > 0);
            printf("\n");
        }

        if (num_tomatoes > 0)
        {
            do
            {
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &num_tomatoes_picked);
                if (num_tomatoes_picked > num_tomatoes)
                {
                    printf("You picked too many... only %d more TOMATO(ES) are needed.\n", num_tomatoes);
                }

                else if (num_tomatoes_picked <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");

                }

                else
                {
                    num_tomatoes -= num_tomatoes_picked;

                    if (num_tomatoes == 0)
                    {
                        printf("Great, that's the tomatoes done!\n");
                    }

                    else
                    {
                        printf("Looks like we still need some TOMATOES...\n");

                    }

                }

            } while (num_tomatoes > 0);
            printf("\n");
        }



        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &yes_no);
        printf("\n");
    }while (yes_no == 1);
  
    printf("Your tasks are done for today - enjoy your free time!\n");

   

    return 0;
}