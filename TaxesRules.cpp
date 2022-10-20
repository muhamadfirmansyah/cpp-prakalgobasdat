#ifndef _TAXES_RULES_
#define _TAXES_RULES_

#include <iostream>
#include <string>
using namespace std;

double getIncome(string); 
// purpose -- to get the employee income
// input   -- a string prompt to be displayed to the user
// output  -- a double value representing the income

double computeTaxes(double);
// purpose -- to compute the taxes for a given income
// input   -- a double value representing the income
// output  -- a double value representing the taxes

void printTaxes(double);
// purpose -- to display taxes to the user
// input   -- a double value representing the taxes
// output  -- None

#endif