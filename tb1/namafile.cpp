#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name, outline; // deklarasi variable bertipe data string
    /**
     * name digunakan untuk menampung inputan nama
     * outline digunakan untuk menampung keluaran dari berdasarkan line dari fstream
     */
    int age;               // deklarasi variabel bertipe data integer
    bool isRepeat = false; // deklarasi variable bertipe data boolean

    fstream dataFile; // deklarasi dataFile sebagai stream untuk membaca input output data ke file

    dataFile.open("data.txt"); // membuka file data.txt untuk mengaksesnya

    if (dataFile.is_open()) // mengecek apakah data.txt sudah berhasil terbuka
    {
        do
        {
            cout << "\nPlease tell your name\t: ";
            cin >> name; // memasukan inputan user ke variabel name
            cout << "How old are you\t\t: ";
            cin >> age; // memasukan inputan user ke variable age

            dataFile << name << "\t" << age << "\n";  // memasukan kedua variable ke dalam file

            cout << "\nAdding Success!\n";

            string inStat; // variable sementara untuk menanyakan apakah user akan lanjut memasukand ata dalam bentuk string
            cout << "\nDo you want to add more: (Y/n): ";
            cin >> inStat; // memasukan input user kedalam variabel inStat  

            if (inStat == "Y" or inStat == "y") // jika input user memasukan y atau Y maka jalankan fungsi didalam scope ini
            {
                isRepeat = true; // mengubah variable isRepeat menjadi true
            }
            else
            {
                isRepeat = false; // mengubah variable isRepeat menjadi false
            }
        } while (isRepeat == true); // jika variable isRepeat berisi true maka ulangi scope menambah data (do)
    }

    dataFile.seekg(ios::beg); // mengatur stream datafile kembali ke baris pertama atau dalam arti lain memulai stream dari awal

    cout << "\n================================\n";
    cout << "\tCONFIRMATION\n";
    cout << "================================\n\n";

    cout << "Below are data inside the file:\n";

    int numb = 1;
    while (getline(dataFile, outline)) // mengambil data perbaris dari dataFile(data.txt) dan memasukannya kedalam variable outline
    {
        cout << numb << ". " << outline << "\n";
        numb++; // menampilkan datafile
    }

    dataFile.close(); // menutup stream dataFile

    cout << "\n\n\n";
}
