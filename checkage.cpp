#include <iostream>

using namespace std;

int main()
{
    int age;

    printf("Please enter your age here: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You are Minor.\n");
        printf("Not eligible to work\n");
    }
    else
    {
        if (age >= 18 && age <= 60)
        {
            printf("You are eligible to work\n");
            printf("Please fill in your details and apply\n");
        }
        else
        {
            printf("Youa re too old to work as per the Goverment rules\n");
            printf("Please collect your pension!\n");
        }
    }

    return 0;
}