#include <iostream>

using namespace std;

int main()
{
checkingNumber:
    int number;

    cout << "Please input your number : ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number is positive" << endl;
    }
    else
    {
        cout << "The number is negative" << endl;
    }

    goto checkingNumber;
    return 0;
}