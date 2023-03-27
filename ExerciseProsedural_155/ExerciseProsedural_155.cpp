#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double d, double e) {
    if (d > 80 && e >= 70)
        return "Diterima";
    else
        return "Ditolak";
}

int main()
{
    double nilM, nilB;
    string nama;
    int pilihan;
    int a[20];


    do {
        cout << "1. Mengisi Data" << endl;
        cout << "2. Exit" << endl;
        cout << "pilihan 1/2 = ";
        cin >> pilihan;

        switch (pilihan) {
            case 1 :
                for (int i = 0; i < 1; i++) {
                    cout << "Data ke - " << " : ";
                    cin >> a[20];
                }
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan nilai Matematika : ";
            cin >> nilM;
            cout << "Masukkan nilai Bahasa Inggris : ";
            cin >> nilB;
            

            cout << "  " << nama;
            cout << "  " << status(rerata(nilM, nilB), nilM) << endl;
            break;


            case 2:
                break;
            defaut :
                cout << "Pilihan Salah" << endl;
                break;
        } 
    } while (pilihan != 2);
}

