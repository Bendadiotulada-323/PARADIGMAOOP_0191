#include <iostream>
using namespace std;

class Barang{
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
}; //Batas Class

int main(){
    Barang Elektronik;
    Elektronik.nama = "Playstation";
    Elektronik.jumlah = 50;
    Elektronik.kategori = "Hiburan";
    Elektronik.TanggalProduksi = "20 Januari 2023";

    Barang Nonelelektronik;
    Nonelelektronik.nama = "Kursi Gaming";
    Nonelelektronik.jumlah = 50;
    Nonelelektronik.kategori = "Hiburan";
    Nonelelektronik.TanggalProduksi = "10 Januari 2018";


    
}