#include "TaxesRules.cpp"

using namespace std;

double computeTaxes(double income)
{
	if (income<5000) return 0.0;
	return 0.07*(income-5000.0);
}

double getIncome(string prompt)
{
	cout << prompt;
	double income;
	cin >> income;
      return income;
}

void printTaxes(double taxes)
{
	cout << "The taxes is $" << taxes << endl;
}