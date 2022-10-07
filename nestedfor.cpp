#include <iostream>

using namespace std;

int main() {

    cout << "==============\n\n";

    for (int i = 1; i <= 8; i++)
    {
        for (int u = i; u >= 1; u--)
        {
            cout << u;
        }

        cout << endl;
    }

    cout << "\n\n==============\n";
    

    return 0;
}