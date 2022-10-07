struct Employee
{
    int age;
    char Name[50];
    char Department[20];
    float salary;

    struct address // Declaring the address structure
    {
        int Door_Number;
        char Street_Name[20];
        char City[20];
        int Postcode;
    } add; // creating the address variable = add
};