/*
*****************************************************************************
                          Workshop - #6 (P1)
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
#define MAX_ITEMS 10

#include <stdio.h>

int main(void)
{

    const double min_income = 500.00, max_income = 400000.00, min_item_cost = 100;
    int i;
    double net_income, item_cost[MAX_ITEMS], tot_item_cost=0;
    int num_items, item_priority[MAX_ITEMS];
    char itemCan_finance[MAX_ITEMS];
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    do {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &net_income);
        if (net_income < min_income)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");

        }
        else if (net_income > max_income)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
    } while (!((net_income > min_income) && (net_income < max_income)));

    printf("\n");

    do {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &num_items);
        if (num_items < 1)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
        else if (num_items > MAX_ITEMS)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }

    } while (!((num_items > 1) && (num_items < MAX_ITEMS)));

    printf("\n");


    for (i = 0; (i < num_items); i++)
    {
        printf("Item-%d Details:\n", i+1);
        do
        {
            printf("   Item cost: $");
            scanf("%lf", &item_cost[i]);
            if (item_cost[i] < min_item_cost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } while (item_cost[i] < min_item_cost);

        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &item_priority[i]);
            if ((item_priority[i] < 1) || (item_priority[i] > 3))
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while (!((item_priority[i] >= 1) && (item_priority[i] <= 3)));

        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &itemCan_finance[i]);
            if ((itemCan_finance[i] != 'y') && (itemCan_finance[i] != 'n'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (!((itemCan_finance[i] == 'y') || (itemCan_finance[i] == 'n')));
      
        

        
        printf("\n");
    }

    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; (i < num_items); i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, item_priority[i], itemCan_finance[i], item_cost[i]);
        tot_item_cost += item_cost[i];
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n",tot_item_cost);

    printf("Best of luck in all your future endeavours!\n");

    return 0;
}

