#include <iostream>
using namespace std;

int main() 
{
    // Data awal beberapa obat
    string namaObat1 = "Paracetamol";
    int stok1 = 50;
    double harga1 = 2500.0;

    string namaObat2 = "Vitamin C";
    int stok2 = 30;
    double harga2 = 5000.0;

    string namaObat3 = "Ibuprofen";
    int stok3 = 25;
    double harga3 = 12000.0;
    
    // Sambutan Apotek
    cout << "    Apotek Miwa   \n";
    cout << "Selamat datang di Apotek Miwa\n";
    
    // Menampilkan daftar obat
    cout << "\n=== DAFTAR OBAT ===\n";
    cout << "1. " << namaObat1 << " | Stok: " << stok1 << " | Harga: Rp" << harga1 << endl;
    cout << "2. " << namaObat2 << " | Stok: " << stok2 << " | Harga: Rp" << harga2 << endl;
    cout << "3. " << namaObat3 << " | Stok: " << stok3 << " | Harga: Rp" << harga3 << endl;
    cout << "===================" << endl;
    cout << "Dapatkan diskon 5% " << "jika belanja lebih dari Rp 100000!" << endl;

    int pilihan, jumlah;
    double total = 0;
    string namaDipilih;

    cout << "\nPilih obat yang ingin dibeli (1-3): ";
    cin >> pilihan;
    cout << "Masukkan jumlah yang ingin dibeli: ";
    cin >> jumlah;

    if (pilihan == 1) {
        if (jumlah <= stok1) {
            total = jumlah * harga1;
            stok1 -= jumlah;
            namaDipilih = namaObat1;
        } 
        else {
            cout << "Stok " << namaObat1 << " tidak mencukupi!" << endl;
            return 0;
        }
    } 
    else if (pilihan == 2) {
        if (jumlah <= stok2) {
            total = jumlah * harga2;
            stok2 -= jumlah;
            namaDipilih = namaObat2;
        } 
        else {
            cout << "Stok " << namaObat2 << " tidak mencukupi!" << endl;
            return 0;
        }
    } 
    else if (pilihan == 3) {
        if (jumlah <= stok3) {
            total = jumlah * harga3;
            stok3 -= jumlah;
            namaDipilih = namaObat3;
        } 
        else {
            cout << "Stok " << namaObat3 << " tidak mencukupi!" << endl;
            return 0;
        }
    } 
    else {
        cout << "Pilihan tidak ada!" << endl;
        return 0;
    }

    double diskon = 0;
    if (total > 100000) {
        diskon = total * 0.05;
        total -= diskon;
    }

    // OUTPUT DATA PEMBELIAN
    cout << "\n===== DATA PEMBELIAN =====" << endl;
    cout << "Nama Obat   : " << namaDipilih << endl;
    cout << "Jumlah      : " << jumlah << endl;
    cout << "Total Harga : Rp" << (total + diskon) << endl;
    if (diskon > 0) {
        cout << "Diskon      : Rp" << diskon << endl;
    }
    cout << "Bayar       : Rp" << total << endl;
    cout << "==========================" << endl;
    cout << "Terima kasih telah berbelanja!" << endl;

    return 0;
}
