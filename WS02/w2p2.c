/*
*****************************************************************************
                          Workshop - #2 (P2)
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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    printf("Set Shirt Prices\n");
    printf("================\n");

    double SMALL_shirt;
    double MEDIUM_shirt;
    double LARGE_shirt;
    double sub_total1, sub_total2, sub_total3;
    double tot_tax1, tot_tax2, tot_tax3;
    double total1, total2, total3;
    double total, tot_tax, sub_total;
    int quantity_1, quantity_2, quantity_3;
    double rounded_tax1, rounded_tax2, rounded_tax3;
    int toonies,loonies,quarters,dimes,nickels,pennies;
    double remainder1, remainder2, remainder3, remainder4, remainder5, remainder6;
    int Toonies, Loonies, Quarters, Dimes, Nickels, Pennies;
    double Remainder1, Remainder2, Remainder3, Remainder4, Remainder5, Remainder6;
    
    int QUANTITY;

    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &SMALL_shirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &MEDIUM_shirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &LARGE_shirt);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n",SMALL_shirt);
    printf("MEDIUM : $%.2lf\n",MEDIUM_shirt);
    printf("LARGE  : $%.2lf\n\n",LARGE_shirt);
    printf("Patty's shirt size is \'S\'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &quantity_1);
    printf("\n");
    printf("Tommy's shirt size is \'L\'\n");
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &quantity_2);
    printf("\n");
    printf("Sally's shirt size is \'M\'\n");
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &quantity_3);
    printf("\n");

    sub_total1 = SMALL_shirt * quantity_1;
    sub_total2 = LARGE_shirt * quantity_2;
    sub_total3 = MEDIUM_shirt * quantity_3;
    tot_tax1 = sub_total1 * TAX;
    tot_tax1 = (tot_tax1 * 100) + 0.5;
    rounded_tax1 = (int)tot_tax1;
    rounded_tax1 = rounded_tax1 / 100;
    tot_tax2 = sub_total2 * TAX;
    tot_tax2 = (tot_tax2 * 100) + 0.5;
    rounded_tax2 = (int)tot_tax2;
    rounded_tax2 = rounded_tax2 / 100;
    tot_tax3 = sub_total3 * TAX;
    tot_tax3 = (tot_tax3 * 100) + 0.5;
    rounded_tax3 = (int)tot_tax3;
    rounded_tax3 = rounded_tax3 / 100;
    total1 = sub_total1 + rounded_tax1;
    total2 = sub_total2 + rounded_tax2;
    total3 = sub_total3 + rounded_tax3;
    total = total1 + total2 + total3;
    sub_total = sub_total1 + sub_total2 + sub_total3;
    tot_tax = rounded_tax1 + rounded_tax2 + rounded_tax3;

    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, SMALL_shirt, quantity_1, sub_total1, rounded_tax1, total1);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, MEDIUM_shirt, quantity_3, sub_total3, rounded_tax3, total3); 
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, LARGE_shirt, quantity_2, sub_total2, rounded_tax2, total2);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", sub_total, tot_tax, total);
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    toonies = (sub_total / 2);
    sub_total = (sub_total*100);
    remainder1 = (int)sub_total % (2*100);
    remainder1 = remainder1 / 100;
    sub_total = sub_total / 100;

    loonies = remainder1 / 1;
    remainder1 = remainder1 * 100;
    remainder2 = ((int)remainder1) % (1 * 100);
    remainder1 = remainder1 / 100;
    remainder2 = remainder2 / 100;

    quarters = remainder2 / 0.25;
    remainder2 = remainder2 * 100;
    remainder3 = ((int)remainder2) % 25;
    remainder3 = remainder3 / 100;
    remainder2 = remainder2 / 100;

    dimes = remainder3 / 0.10;
    remainder3 = remainder3 * 100;
    remainder4 = (int)remainder3 % 10;
    remainder4 = remainder4 / 100;
    remainder3 = remainder3 / 100;

    nickels = remainder4 / 0.05;
    remainder4 = remainder4 * 100;
    remainder5 = (int)remainder4 % 5;
    remainder5 = remainder5 / 100;
    remainder4 = remainder4 / 100;

    pennies = remainder5 / 0.01;
    remainder5 = remainder5 * 100;
    remainder6 = (int)remainder5 % 1;
    remainder6 = remainder6 / 100;
    remainder5 = remainder5 / 100;
    QUANTITY = quantity_1 + quantity_2 + quantity_3;
 
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("% 22.4lf\n", sub_total);
    printf("Toonies  %3d %9.4lf\n", toonies, remainder1);
    printf("Loonies  %3d %9.4lf\n", loonies, remainder2);
    printf("Quarters %3d %9.4lf\n", quarters,remainder3);
    printf("Dimes    %3d %9.4lf\n", dimes,remainder4);
    printf("Nickels  %3d %9.4lf\n", nickels, remainder5);
    printf("Pennies  %3d %9.4lf\n\n", pennies, remainder6);
    printf("Average cost/shirt: $%.4lf\n\n", sub_total / QUANTITY);
   
    Toonies = total / 2;
    total = (total * 100);
    Remainder1 = (int)total % (2 * 100);
    Remainder1 = Remainder1 / 100;
    total = total / 100;
    
    Loonies = Remainder1 / 1;
    Remainder1 = Remainder1 * 100;
    Remainder2 = ((int)Remainder1) % (1 * 100);
    Remainder1 = Remainder1 / 100;
    Remainder2 = (Remainder2 / 100);

    Quarters = Remainder2 / 0.25;
    Remainder2 = Remainder2 * 100;
    Remainder3 = ((int)Remainder2) % 25;
    Remainder3 = (Remainder3 / 100)+0.01;
    Remainder2 = Remainder2 / 100;

    Dimes = Remainder3 / 0.10;
    Remainder3 = Remainder3 * 100;
    Remainder4 = ((int)Remainder3 % 10);
    Remainder4 = (Remainder4 / 100)+0.01;
    Remainder3 = Remainder3 / 100;

    Nickels = Remainder4 / 0.05;
    Remainder4 = Remainder4 * 100;
    Remainder5 = ((int)Remainder4 % 5);
    Remainder5 = (Remainder5 / 100 )+0.01;
    Remainder4 = Remainder4 / 100;

    Pennies = Remainder5 / 0.01;
    Remainder5 = Remainder5 * 100;
    Remainder6 = ((int)Remainder5 % 1);
    Remainder6 = (Remainder6 / 100);
    Remainder5 = Remainder5 / 100;

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("% 22.4lf\n", total);
    printf("Toonies  %3d %9.4lf\n", Toonies, Remainder1);
    printf("Loonies  %3d %9.4lf\n", Loonies, Remainder2);
    printf("Quarters %3d %9.4lf\n", Quarters,Remainder3);
    printf("Dimes    %3d %9.4lf\n", Dimes, Remainder4);
    printf("Nickels  %3d %9.4lf\n", Nickels, Remainder5);
    printf("Pennies  %3d %9.4lf\n\n",Pennies, Remainder6);
    printf("Average cost/shirt: $%.4lf\n", total / QUANTITY);



    return 0;
}