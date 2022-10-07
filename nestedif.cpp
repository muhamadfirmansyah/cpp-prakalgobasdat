#include <iostream>

using namespace std;

int main()
{

    cout << "==========\nOUTPUT:\n==========\n";

    // START YOUR CODE HERE

hitung:

    int num;

    cout << "Masukan Number : ";
    cin >> num;

    if (num != 0)
    {
        if (num % 2 == 0)
        {
            cout << "Number Bilangkan GENAP" << endl;
        }
        else
        {
            cout << "Number Bilangan GANJIL" << endl;
        }
    }
    else
    {
        cout << "Number sama dengan nol" << endl;
    }

    bool repeat;

    cout << "Ulangi? (Y/n)";
    cin >> repeat;

    if (repeat == 'Y' || repeat == 'y')
    {
        goto hitung;
    }

    // END OF YOUR CODE

    cout << "\n\n"
         << endl;

    return 0;
}
