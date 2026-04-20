#include <iostream>
using namespace std;

class barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;

    //Methode Spesifikasi Barang
    void printdata(){
        cout << "NAMA : " << nama << endl;
        cout << "JUMLAH : " << jumlah << endl;
        cout << "KATEGORI : " << kategori << endl;
        cout << "TANGGAL PRODUKSI : " << TanggalProduksi << endl;
    }
    
}