#include <iostream>
#include <string>

using namespace std;

int main()
{

    float M[5] = {20.4, 30.0, 5.8, 67.0, 15.2};
    float *p;

    int a;
    p = M;
    
    for ( a = 0; a < 5; a++)
    {
        cout << "*(p + " << a << ") = " << *(p + a) << endl;
    }
    

    int N[5]; // = {12, 34, 12, 12, 34};
    N[0] = 1;
    N[1] = 2;
    N[2] = 3;
    N[3] = 4;
    N[4] = 5;

    string H[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};


    for (int i = 0; i <= sizeof(H) / sizeof(string); i++)
    {
        cout << H[i] << endl;
    }


    int O[4] = { 20, 30, 5, 67 };
    int *s;
    int x;
    s = O;

    cout << "Address of array n = " << s << endl;

    for ( x = 0; x < 4; x++)
    {
        cout << "Address of array " << endl;
    }
    

    return 0;
}