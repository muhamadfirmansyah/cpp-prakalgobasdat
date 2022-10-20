#include <iostream>

using namespace std;


// Function Signatures
double getIncome(string);
double computeTaxes(double);

double computeTaxes(double income) { // function header
    if (income < 5000.0) return 0.0;
    double taxes = 0.07 * (income - 5000.0);
    return taxes;   
}

double getIncome(string prompt) {
    cout << prompt;

    double income;
    cin >> income;

    return income;
}

int main() {

    double income = getIncome("Please enter income: ");

    double taxes = computeTaxes(income);
    
    return 0;
}