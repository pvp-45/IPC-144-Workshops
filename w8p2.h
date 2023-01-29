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


// ----------------------------------------------------------------------------
// defines/macros

#define MAXPRODUCTS 3
#define NUMOFGRAMS 64
#define CONVERSIONFACTOR 2.20462


// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo {
    int sku;
    double productPrice;
    int calories;
    double weight_in_pounds;

};

struct ReportData {

    int sku;
    double productPrice;
    int calories;
    double weight_in_pounds;
    double weight_in_kg;
    int weight_in_g;
    double totalServings;
    double costPerServing;
    double caloriesCost;



};

// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

int getIntPositive(int* wholeNumber);


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


double getDoublePositive(double* doubleNumber);


// 3. Opening Message (include the number of products that need entering)

void openingMessage(const int numofProducts);

// 4. Get user input for the details of cat food product

struct CatFoodInfo getCatFoodInfo(const int seqNumber);



// 5. Display the formatted table header

void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data

void displayCatFoodData(const int sku, const double* productPrice, const double* weight_in_pounds, const int calories);



// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg

double convertLbsKg(const double* pounds,double* kilogram);


// 9. convert lbs: g

int convertLbsG(const double* pounds, int* gram);

// 10. convert lbs: kg / g

void convertLbs(const double* pounds, double* kilogram, int* gram);

// 11. calculate: servings based on gPerServ

double calculateServings(const int servingSizeInGrams,const int totGrams,double* totServings);


// 12. calculate: cost per serving

double calculateCostPerServing(const double* productPrice,const double* totServings,double* costPerServing);


// 13. calculate: cost per calorie

double calculateCostPerCal(const double* productPrice, const double* totCalories, double* costPerCal);

// 14. Derive a reporting detail record based on the cat food product data

struct ReportData calulateReportData(struct CatFoodInfo information);

// 15. Display the formatted table header for the analysis results

void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table

void displayReportData(const struct ReportData data, const int cheapestProduct);

// 17. Display the findings (cheapest)

void displayFinalAnalysis(const struct CatFoodInfo cheapestProduct);

// ----------------------------------------------------------------------------

// 7. Logic entry point 

void start(void);

