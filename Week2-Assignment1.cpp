#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main() {

	const int    weeksWorked = 5; //five weeks of job
	const double percentTax      = 0.12; //12% total tax on income
	const double percentClothes  = 0.10; //after taxes spend 10% on clothing + accessories
	const double percentSupplies = 0.02; //after taxes spend 2% to buy school supplies
	const double percentBonds    = 0.25; //after buying clothes + supplies spend 25% on bonds
	const double matchingBonds = 0.50; //parents match $0.50 to every dollar spent on bonds

	//inputs
	double payHourly;
	int    hoursWorked;

	//calculated
	double totalIncome;
	double netIncome;
	double totalSpentClothing;
	double totalSpentSupplies;
	double totalBonds;
	double parentsBonds;
	
	//-----------------------------------------------------------------------------------//

	//Initial user inputs
	cout << "Please enter your hourly pay per hour and your hours worked.\n";
	cout << "Format input as \"xx.xx xx\" with no symbols like \"$\"" << endl;
	cin >> payHourly >> hoursWorked;

	//Calculations
	totalIncome = weeksWorked * payHourly * hoursWorked;
	netIncome = totalIncome * (1.00-percentTax); //find remaining pay after taxes, 100%-%tax

	totalSpentClothing = netIncome * percentClothes;
	
	totalSpentSupplies = netIncome * percentSupplies;

	totalBonds = (netIncome - totalSpentClothing - totalSpentSupplies) * percentBonds;

	parentsBonds = totalBonds * (matchingBonds / 1.00); //parents match percent of dollar for amoutn spend on bonds

	//Outputs
	cout << fixed << setprecision(2);
	cout << "Your total income was $" << totalIncome << ". Your net income was $" << netIncome << "." << endl;
	cout << "You spent $" << totalSpentClothing << " on clothing and accessories.\n";
	cout << "You spent $" << totalSpentSupplies << " on school supplies.\n";
	cout << "You spent $" << totalBonds << " on savings bonds.";
	cout << "Yours parents spent $" << << " additional on savings bonds for you.\n";

	return 0;
}