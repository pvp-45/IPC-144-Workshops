



#include <stdio.h>
int main()
{
	const double testValue = 330.99;
	const int productid_1 = 111, productid_2 = 222, productid_3 = 111;
	const double price_1 = 111.49, price_2 = 222.99, price_3 = 334.49;
	const char tax1 = 'Y', tax2 = 'N', tax3 = 'N';
	double avg;
	printf("Product Information\n");
	printf("===================\n");

	printf("Product-1 (ID:%d)\n", productid_1);
	printf("  Taxed: %c\n",tax1 );
	printf("  Price: $%.4lf\n\n", price_1);

	printf("Product-2 (ID:%d)\n", productid_2);
	printf("  Taxed: %c\n", tax2);
	printf("  Price: $%.4lf\n\n", price_2);

	printf("Product-3 (ID:%d)\n", productid_3);
	printf("  Taxed: %c\n", tax3);
	printf("  Price: $%.4lf\n\n", price_3);

	avg = (price_1 + price_2 + price_3)/3;
	printf("The average of all prices is: $%.4lf\n\n", avg);

	printf("About Relational and Logical Expressions!\n");
	printf("========================================\n");
	printf("1. These expressions evaluate to TRUE or FALSE\n");
	printf("2. FALSE: is always represented by integer value 0\n");
	printf("3. TRUE : is represented by any integer value other than 0\n\n");
	
	printf("Some Data Analysis...\n");
	printf("=====================\n");
	printf("1. Is product 1 taxable? -> %d\n\n", tax1 == 'Y');
	printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", tax2 == 'N' && tax3 == 'N');
	printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, price_3 < testValue);
	printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", price_3 > (price_1 + price_2));
	printf("5. Is the price of product 1 equal to or more than the price difference\n");
	printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", price_1 >= (price_3 - price_2),334.4900-222.9900);
	printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", price_2 >= avg);
	printf("7. Based on product ID, product 1 is unique -> %d\n\n", (productid_1 != productid_3) && (productid_1 != productid_2));
	printf("8. Based on product ID, product 2 is unique -> %d\n\n", (productid_2 != productid_1) && (productid_2 != productid_3));
	printf("9. Based on product ID, product 3 is unique -> %d\n\n", (productid_3 != productid_2) && (productid_3 != productid_1));
	return 0;


	

}
