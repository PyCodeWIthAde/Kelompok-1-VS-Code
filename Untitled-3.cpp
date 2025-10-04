#include <iostream>

using namespace std;
int main ()
{
    float panjang, lebar, luas, keliling;

    cout << "Program menghitung luas dan keliling persesgi panjang\n";
    cout << "\nMasukan panjang: ";
    cin >> panjang;
    cout << "Masukan lebar : ";
    cin >> lebar;

    luas = panjang * lebar;
    keliling = 2 * panjang + 2 * lebar;

    cout << "Luas persegi panjang = " << luas5 << endl;
    cout << "Keliling persegi panjang = " << keliling << endl;

    return 0;
}