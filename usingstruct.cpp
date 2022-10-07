#include <iostream>
using namespace std;
struct part // declare a structure
{
    int modelnumber; // ID number of widget
    int partnumber;  // ID number of widget part
    float cost;      // cost of part
};

int main()
{
    part part1; // define a structure variable

    part1.modelnumber = 6244; // give values to structure members
    part1.partnumber = 373;
    part1.cost = 217.55F;

    part part2;

    // display structure members
    cout << "Model " << part1.modelnumber;
    cout << ", part " << part1.partnumber;
    cout << ", costs $" << part1.cost << endl;

    cout << "Model " << part2.modelnumber;
    cout << ", part " << part2.partnumber;
    cout << ", costs $" << part2.cost << endl;
    return 0;
}