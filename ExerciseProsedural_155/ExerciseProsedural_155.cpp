#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double d, double e) {
    if (d <= 70 && e > 80)
        return "lulus";
    else
        return "gagal";
}

int main()
{
    double nilM, nilB;

    cout << "Masukkan nilai Matematika : ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris : ";
    cin >> nilB;

    cout << "status kelulusan" << status(rerata(nilM, nilB),nilM
    );
}

