#include <iostream>
#include <fstream>
#include <string>

#define max 10

using namespace std;

struct Mahasiswa
{
    string name[max];
    int count;
};

Mahasiswa m;

    void initialize(Mahasiswa *m)
    {
        m->count = 0;

        string name;
        size_t i = 0;

        fstream fsFile;

        fsFile.open("data.txt");

        if (fsFile.is_open())
        {
            while (getline(fsFile, name))
            {
                m->name[i] = name;
                ++(m->count);
            }
        }

        fsFile.close();
    }

void rewriteFile(Mahasiswa *m)
{
    fstream fsFile;

    fsFile.open("data.txt");

    if (fsFile.is_open())
    {
        for (size_t i = 0; i < m->count; i++)
        {
            fsFile << m->name[i];

            if (i < (m->count - 1))
            {
                fsFile << "\n";
            }
        }
    }

    fsFile.close();
}

void createData(Mahasiswa *m)
{
    string inputName;

    cout << "Please input name: ";
    cin >> inputName;

    m->name[m->count] = inputName;
    ++(m->count);

    rewriteFile(m);
}

void readData(Mahasiswa *m)
{
    for (int i = 0; i < m->count; i++)
    {
        cout << "ID: " << (i + 1) << " - " << m->name[i] << endl;
    }
}

void updateData(Mahasiswa *m)
{
    int idx;
    string new_val;

    cout << "Please input the ID: ";
    cin >> idx;

    if ((m->name[idx - 1]).empty() == 0)
    {
        cout << "Prev: " << m->name[idx - 1] << endl;
        cout << "Input new value : ";
        cin >> new_val;

        m->name[idx - 1] = new_val;

        cout << "\nUpdate Success!" << endl;
    }
    else
    {
        cout << "Data not found!" << endl;
    }

    rewriteFile(m);
}

void deleteData(Mahasiswa *m)
{
    int idx;

    cout << "Please input the ID: ";
    cin >> idx;

    if ((m->name[idx - 1]).empty() == 0)
    {
        string data[max];

        size_t a = 0;
        for (size_t i = 0; i < m->count; i++)
        {
            if (i != (idx - 1))
            {
                data[a++] = m->name[i];
            }
        }

        --(m->count);

        for (size_t i = 0; i < m->count; i++)
        {
            m->name[i] = data[i];
        }

        cout << "\nDelete Success!" << endl;
    }
    else
    {
        cout << "Data not found!" << endl;
    }

    rewriteFile(m);
}

void searchData(Mahasiswa *m)
{
    string inputName;
    string result[max];

    cout << "Please input name: ";
    cin >> inputName;

    for (size_t i = 0; i < m->count; i++)
    {
        size_t found = m->name[i].find(inputName);
        if (found != string::npos)
        {
            result[i] = m->name[i];
        }
    }

    for (size_t i = 0; i < m->count; i++)
    {
        cout << result[i] << endl;
    }
}

int displayMenu()
{
    int selectedMenu;

    cout << "\n\n===============MENU================" << endl;
    cout << "Please select the menu:" << endl;
    cout << "1. CREATE new data" << endl;
    cout << "2. READ all data" << endl;
    cout << "3. UPDATE data" << endl;
    cout << "4. DELETE data" << endl;
    cout << "5. SEARCH data" << endl;
    cout << "6. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Please input (1-6): ";
    cin >> selectedMenu;

    return selectedMenu;
}

int main()
{

    initialize(&m);

    char isContinue = 'Y';

    do
    {
        int selectedMenu = displayMenu();

        switch (selectedMenu)
        {
        case 1:
            cout << "\n=======CREATE=======" << endl;
            createData(&m);
            break;
        case 2:
            cout << "\n=======READ=======" << endl;
            readData(&m);
            break;
        case 3:
            cout << "\n=======UPDATE=======" << endl;
            readData(&m);
            updateData(&m);
            break;
        case 4:
            cout << "\n=======DELETE=======" << endl;
            readData(&m);
            deleteData(&m);
            break;
        case 5:
            cout << "\n=======SEARCH=======" << endl;
            searchData(&m);
            break;
        case 6:
            isContinue = 'n';
            break;

        default:
            cout << "Selected menu not found!" << endl;
            break;
        }

    } while (isContinue == 'Y' || isContinue == 'y');

    return 0;
}