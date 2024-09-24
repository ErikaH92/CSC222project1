// CSC222project1.cpp : This is the starting point for two different programming projects." 
// This program calculates and displays the disscounted value of an item. 
//

#include <iostream>

using namespace std;

// Percentage Discount
//

#include <iostream>
using namespace std;

int main()
{
	double regularPrice, percentDiscount, discountAmount, reducedPrice;

	regularPrice = 59.95;
	percentDiscount = 0.2;

	discountAmount = regularPrice * percentDiscount;
	reducedPrice = regularPrice - discountAmount;

	cout << "The discount amount is $" << discountAmount << endl;
	cout << "The discounted price is $" << reducedPrice;

	return 0;
}

int main()
{
    std::cout << "CSC222 Project1\n";
}
