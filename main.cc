#include <iostream>
#include <iomanip>

int main() {

//Declare variables
int mealcost;
float tip;

std::cout << "Please input meal cost: ";
std::cin >> mealcost;

std::cout << "Please input tip percentage: ";
std::cin >> tip; 

std::cout << "\n\nRestaurant Bill\n===================="
	<< "\nSubtotal: $" << mealcost << setprecision(2)
	<< "\nTaxes: $" << taxes << set precision(2) 
	<< "\nTip: $" << tip << set precision(2)
	<< "\n====================" 
	<< "\nTotal: $" << total << "\n\n"; 
	

return 0; 
}
