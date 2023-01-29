/*
*****************************************************************************
                          Workshop - #8 (P1)
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


// System Libraries
#include <stdio.h>


// User Libraries

#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

int getIntPositive(int* wholeNumber)

{
	int i;
	do {
		scanf("%d", &i);
		if (i <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
	} while (i <= 0);

	if (wholeNumber != NULL)
	{
		*wholeNumber = i;
	}
	return i;
	

}


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


double getDoublePositive(double* doubleNumber)
{
	double i;
	do {
		scanf("%lf", &i);
		if (i <= 0) {
			printf("ERROR: Enter a positive value: ");
		}
	} while (i <= 0);
	if (doubleNumber != NULL)
	{
		*doubleNumber = i;
	}
	return i;
}



// 3. Opening Message (include the number of products that need entering)

void openingMessage(const int numofProducts)
{
		printf("Cat Food Cost Analysis\n");
		printf("======================\n\n");
		printf("Enter the details for %d dry food bags of product data for analysis.\n", MAXPRODUCTS);
		printf("NOTE: A 'serving' is %dg\n\n", NUMOFGRAMS);
		return;
}






// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seqNumber)
{
	struct CatFoodInfo information;
	int k = 0; 
	double l = 0.0;
	printf("Cat Food Product #%d\n", seqNumber+1);
	printf("--------------------\n");
	printf("SKU           : ");
	information.sku = getIntPositive(&k);

	printf("PRICE         : $");
	information.productPrice = getDoublePositive(&l);

	printf("WEIGHT (LBS)  : ");
	information.weight_in_pounds = getDoublePositive(&l);

	printf("CALORIES/SERV.: ");
	information.calories = getIntPositive(&k);
	return information;
}


	// 5. Display the formatted table header
	void displayCatFoodHeader(void)
	{
		printf("SKU         $Price    Bag-lbs Cal/Serv\n");
		printf("------- ---------- ---------- --------\n");
		
	}

	// 6. Display a formatted record of cat food data

	void displayCatFoodData(const int sku, const double* productPrice,const double* weight_in_pounds, const int calories )
	{
		printf("%07d %10.2lf %10.1lf %8d\n", sku, *productPrice, *weight_in_pounds, calories);
	}
	

	// 7. Logic entry point

	void start(void)
	{
		struct CatFoodInfo info[MAXPRODUCTS] = { {0 } };
		int j;
		openingMessage(MAXPRODUCTS);
		for (j = 0; j < MAXPRODUCTS; j++)
		{
			info[j] = getCatFoodInfo(j);
			printf("\n");
		}

		displayCatFoodHeader();

		for (j = 0; j < MAXPRODUCTS; j++)
		{
			displayCatFoodData(info[j].sku, &info[j].productPrice, &info[j].weight_in_pounds, info[j].calories);
		}


	}


	

