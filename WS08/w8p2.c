/*
*****************************************************************************
                          Workshop - #8 (P2)
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


// User-Defined Libraries

#include "w8p2.h"


// ----------------------------------------------------------------------------
// PART-1

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
	printf("Cat Food Product #%d\n", seqNumber + 1);
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

void displayCatFoodData(const int sku, const double* productPrice, const double* weight_in_pounds, const int calories)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *productPrice, *weight_in_pounds, calories);
}




// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)

double convertLbsKg(const double* pounds, double* kilogram)
{
	double kg;
	kg = (*pounds) / CONVERSIONFACTOR;
	if (kilogram != NULL)
	{
		*kilogram = kg;
	}
	return kg;
}






// 9. convert lbs: g (call convertKG, then * 1000)

int convertLbsG(const double* pounds, int* gram)
{
	
	
	int g;
	g = *pounds / CONVERSIONFACTOR * 1000;

	
	
	if (gram != NULL)
	{
		*gram = g;
	}
	return g;


}

// 10. convert lbs: kg and g

void convertLbs(const double* pounds, double* kilogram, int* gram)
{
	double kg = (*pounds) / CONVERSIONFACTOR;
	int g = *pounds / CONVERSIONFACTOR * 1000;
	
	
	if (kilogram != NULL)
	{
		*kilogram = kg;
	}
	
	if (gram != NULL)
	{
		*gram = g;
	}
	return;
	

}



// 11. calculate: servings based on gPerServ

double calculateServings(const int servingSizeInGrams, const int totGrams, double* totServings)
{
	double n = 0.0;
	n = (double)totGrams / servingSizeInGrams;
	if (totServings != NULL)
	{
		*totServings = n;
	}
	return n;
}



// 12. calculate: cost per serving

double calculateCostPerServing(const double* productPrice, const double* totServings, double* costPerServing)
{
	double c = 0.0;
	c = *productPrice / *totServings;
	if (costPerServing != NULL)
	{
		*costPerServing = c;
	}
	return c;
}

// 13. calculate: cost per calorie

double calculateCostPerCal(const double* productPrice, const double* totCalories, double* costPerCal)
{
	double c = 0.0;
	c = *productPrice / *totCalories;
	if (costPerCal != NULL)
	{
		*costPerCal = c;
	}
	return c;
}

// 14. Derive a reporting detail record based on the cat food product data

struct ReportData calulateReportData(struct CatFoodInfo information)
{
	
	struct ReportData data;
	data.sku = information.sku;
	data.productPrice = information.productPrice;
	data.calories = information.calories;
	data.weight_in_pounds = information.weight_in_pounds;

	data.weight_in_kg = convertLbsKg(&data.weight_in_pounds, &data.weight_in_kg);
	data.weight_in_g = convertLbsG(&data.weight_in_pounds, &data.weight_in_g);
	data.totalServings = calculateServings(NUMOFGRAMS, data.weight_in_g, &data.totalServings);

	double totCalories = data.totalServings * data.calories;
	data.costPerServing = calculateCostPerServing(&data.productPrice, &data.totalServings, &data.costPerServing);
	data.caloriesCost = calculateCostPerCal(&data.productPrice, &totCalories, &data.caloriesCost);

	return data;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", NUMOFGRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table

void displayReportData(const struct ReportData data, const int cheapestProduct)
{
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", data.sku, data.productPrice, data.weight_in_pounds, data.weight_in_kg, data.weight_in_g, data.calories, data.totalServings, data.costPerServing, data.caloriesCost);
	
}


// 17. Display the findings (cheapest)

void displayFinalAnalysis(const struct CatFoodInfo cheapestProduct)
{
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n\n", cheapestProduct.sku, cheapestProduct.productPrice);

	printf("Happy shopping!\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	
	struct CatFoodInfo info[MAXPRODUCTS] = { {0 } };
	struct ReportData data[MAXPRODUCTS] = { {0} };
	int j;
	openingMessage(MAXPRODUCTS);
	for (j = 0; j < MAXPRODUCTS; j++)
	{
		info[j] = getCatFoodInfo(j);
		data[j] = calulateReportData(info[j]);
		printf("\n");
	}

	displayCatFoodHeader();


	for (j = 0; j < MAXPRODUCTS; j++)
	{
		displayCatFoodData(info[j].sku, &info[j].productPrice, &info[j].weight_in_pounds, info[j].calories);
	}
	int cheapestProduct = 0;
	double cheapestProductPrice = data[0].costPerServing;
	for (j = 0; j < MAXPRODUCTS; j++)
	{
		if (data[j].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = data[j].costPerServing;
			cheapestProduct = j;
		}
	}
	printf("\n");

	
	displayReportHeader();

	
	for (j = 0; j < MAXPRODUCTS; j++)
	{
		displayReportData(data[j], cheapestProduct);

		if (cheapestProduct == j)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	
	for (j = 0; j < MAXPRODUCTS; j++)
	{
		if (j == cheapestProduct)
		{
			displayFinalAnalysis(info[j]);
		}
	}
}





	

	

	



	
	



