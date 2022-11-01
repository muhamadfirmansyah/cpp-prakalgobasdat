#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void inputData()
{
    string name;
    int age;

    fstream dataFile; // deklarasi dataFile sebagai stream untuk membaca input output data ke file

    dataFile.open("data.txt"); // membuka file data.txt untuk mengaksesnya

    dataFile.seekp(ios::end);

    if (dataFile.is_open())
    {
        cout << "\nPlease tell your name\t: ";
        cin >> name; // memasukan inputan user ke variabel name
        cout << "How old are you\t\t: ";
        cin >> age; // memasukan inputan user ke variable age

        dataFile << name << "\t" << age << "\n"; // memasukan kedua variable ke dalam file

        cout << "\nAdding Success!\n";
    }

    dataFile.close();
}

void showAllData()
{
    fstream dataFile; // deklarasi dataFile sebagai stream untuk membaca input output data ke file

    dataFile.open("data.txt"); // membuka file data.txt untuk mengaksesnya

    int numb = 1;
    string outline;

    cout << "\n================================\n";
    cout << "\tCONFIRMATION\n";
    cout << "================================\n\n";

    cout << "Below are data inside the file:\n";

    while (getline(dataFile, outline)) // mengambil data perbaris dari dataFile(data.txt) dan memasukannya kedalam variable outline
    {
        cout << numb << ". " << outline << "\n";
        numb++; // menampilkan datafile
    }
    numb++; // menampilkan datafile

    dataFile.close(); // menutup stream dataFile
}

int main()
{
    bool isRepeat = false; // deklarasi variable bertipe data boolean

    // create file
    fstream file("data.txt", fstream::in | fstream::out | fstream::trunc);

    fstream dataFile; // deklarasi dataFile sebagai stream untuk membaca input output data ke file

    dataFile.open("data.txt"); // membuka file data.txt untuk mengaksesnya

    dataFile.seekg(ios::ate); // mengatur stream datafile kembali ke baris pertama atau dalam arti lain memulai stream dari awal

    if (dataFile.is_open()) // mengecek apakah data.txt sudah berhasil terbuka
    {
        do
        {
            char menu;

            switch (menu)
            {
            case "1":
                showAllData();
                break;
            case "2":
                inputData();
            default:
                string inStat; // variable sementara untuk menanyakan apakah user akan lanjut memasukand ata dalam bentuk string
                cout << "\nDo still want to be here: (Y/n): ";
                cin >> inStat; // memasukan input user kedalam variabel inStat

                if (inStat == "Y" or inStat == "y") // jika input user memasukan y atau Y maka jalankan fungsi didalam scope ini
                {
                    isRepeat = true; // mengubah variable isRepeat menjadi true
                }
                else
                {
                    isRepeat = false; // mengubah variable isRepeat menjadi false
                }
                break;
            }
        } while (isRepeat == true)
    }

    dataFile.close(); // menutup stream dataFile

    cout << "\n\n\n";
}
