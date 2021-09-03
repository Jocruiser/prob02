#include <iostream>
#include <iomanip>

int main() {

//Declare variables
float mealcost;
float percentage;

//ask user for variables
std::cout << "Please input meal cost: ";
std::cin >> mealcost;

std::cout << "Please input tip percentage: ";
std::cin >> percentage; 



//display Restaurant Bill
float tax = 0.075 * mealcost;
float tip = mealcost * (percentage/100);
float total = mealcost + tip + tax; 

std::cout << "\nRestaurant Bill\n===================="
	<< std::fixed << std::setprecision(2) // displays number with 2 decimal places
	<< "\nSubtotal: $" << mealcost
	<< "\nTaxes: $" << tax 
	<< "\nTip: $" << tip
	<< "\n====================" 
	<< "\nTotal: $" << total << "\n\n"; 
	

return 0; 
}
