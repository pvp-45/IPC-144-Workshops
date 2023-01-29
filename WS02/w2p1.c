/*
*****************************************************************************
                          Workshop - #2 (P1)
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
    const double TAX = 0.13;
    const char patSize = 'S';
    printf("Set Shirt Prices\n");
    printf("================\n");
    double SMALL_shirt;
    double MEDIUM_shirt;
    double LARGE_shirt;
    int quantity;
    double sub_total;
    double tot_tax;
    
    double rounded_tax;
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &SMALL_shirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &MEDIUM_shirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &LARGE_shirt);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%0.2f\n",SMALL_shirt);
    printf("MEDIUM : $%0.2f\n", MEDIUM_shirt);
    printf("LARGE  : $%0.2f\n\n", LARGE_shirt);
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &quantity);
    printf("\n");
    printf("Patty's shopping cart...\n");
    printf("Contains : %d ", quantity);
    printf("shirts\n");
    sub_total = SMALL_shirt * quantity;
    printf("Sub-total: $%0.4lf\n", sub_total);
    tot_tax = TAX * sub_total ;
    tot_tax = (tot_tax * 100) + 0.5;
    tot_tax = (int)tot_tax;
    rounded_tax= tot_tax / 100;
    printf("Taxes    : $ %0.4lf\n", rounded_tax);
    printf("Total    : $%0.4lf\n", sub_total + rounded_tax);
    return 0;
}