/*
*****************************************************************************
                          Workshop - #5 (P2)
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1, DEC = 12;
    int year, month;
    double morning_ratings, evening_ratings;
    double tot_morning_ratings=0, tot_evening_ratings=0;
    int i = 1;
    printf("General Well-being Log\n");
    printf("======================\n");

    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if ((year >= MIN_YEAR && year <= MAX_YEAR) && (month >= JAN && month <= DEC))
        {
            printf("\n");
            printf("*** Log date set! ***\n\n");
            if (month == 2)
            {



                for (i = 1; (i <= LOG_DAYS && i <= 28); i++) {

                    printf("%d-FEB-%.2d\n", year, i);
                   
                    do {
                        
                        printf("   Morning rating (0.0-5.0): ");
                        scanf("%lf", &morning_ratings);
                        if (!(morning_ratings >= 0.0 && morning_ratings <= 5.0))
                        {
                            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");

                        }
                        else {
                            tot_morning_ratings += morning_ratings;
                        }
                    } while (!(morning_ratings >= 0.0 && morning_ratings <= 5.0));

                    do {
                        printf("   Evening rating (0.0-5.0): ");
                        scanf("%lf", &evening_ratings);

                        if (!(evening_ratings >= 0.0 && evening_ratings <= 5.0))
                        {
                            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                        }
                        else {
                            tot_evening_ratings += evening_ratings;
                        }

                    } while (!(evening_ratings >= 0.0 && evening_ratings <= 5.0));
                    printf("\n");
                }


                

                printf("Summary\n");
                printf("=======\n");
                printf("Morning total rating: %.3lf\n", tot_morning_ratings);
                printf("Evening total rating:  %.3lf\n", tot_evening_ratings);
                printf("----------------------------\n");
                printf("Overall total rating: %.3lf\n", (tot_morning_ratings + tot_evening_ratings));
                printf("\n");

                printf("Average morning rating:  %.1lf\n", (tot_morning_ratings / LOG_DAYS));
                printf("Average evening rating:  %.1lf\n", (tot_evening_ratings / LOG_DAYS));
                printf("----------------------------\n");
                printf("Average overall rating:  %.1lf\n", ((tot_morning_ratings + tot_evening_ratings) / (LOG_DAYS*2) ));
            }


            else if (month == 4)
            {
                printf("%d-APR-%.2d\n", year, i);
            }

            else if (month == 5)
            {
                printf("%d-MAY-%.2d\n", year, i);
            }

            else if (month == 6)
            {
                printf("%d-JUN-%.2d\n", year, i);
            }

            else if (month == 7)
            {
                printf("%d-JUL-%.2d\n", year, i);
            }

            else if (month == 8)
            {
                printf("%d-AUG-%.2d\n", year, i);
            }

            else if (month == 9)
            {
                printf("%d-SEP-%.2d\n", year, i);
            }

            else if (month == 10)
            {
                printf("%d-OCT-%.2d\n", year, i);
            }

            else if (month == 11)
            {
                printf("%d-NOV-%.2d\n", year, i);
            }

            else if (month == 12)
            {
                printf("%d-DEC-%.2d\n", year, i);
            }
            else
            {
                printf("%d-JAN-%.2d\n", year, i);
            }
        }


    

        else if ((!(year >= MIN_YEAR && year <= MAX_YEAR)) && (month >= JAN && month <= DEC))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        else if ((year >= MIN_YEAR && year <= MAX_YEAR) && (!(month >= JAN && month <= DEC)))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

        else
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
    } while (!((year >= MIN_YEAR && year <= MAX_YEAR) && (month >= JAN && month <= DEC)));


   


    return 0;

}