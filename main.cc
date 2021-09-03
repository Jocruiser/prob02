#include <iostream>
#include <iomanip>

int main() {

//Declare variables
int mealcost;
float percentage;
float tax = 0.075 * mealcost;
float tip = mealcost * percentage;
float total = mealcost + tax + tip;

//ask user for variables
std::cout << "Please input meal cost: ";
std::cin >> mealcost;

std::cout << "Please input tip percentage: ";
std::cin >> percentage; 



//display Restaurant Bill

std::cout << "\n\nRestaurant Bill\n===================="
	<< "\nSubtotal: $" << mealcost << std::setprecision(2)
	<< "\nTaxes: $" << tax << std::setprecision(2)
	<< "\nTip: $" << tip << std::setprecision(2)
	<< "\n====================" 
	<< "\nTotal: $" << total << "\n\n"; 
	

return 0; 
}
