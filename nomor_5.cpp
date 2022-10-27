#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int kode, jumlah, harga, total;
    string ukuran;

    cout << "Daftar Produk" << endl;
    cout << "|-------------|---------------|---------------|------------------|" << endl;
    cout << "|    Kode     |  Nama Produk  |    Ukuran     |      Harga       |" << endl;
    cout << "|-------------|---------------|---------------|------------------|" << endl;
    cout << "|     1       |    Dancow     |   B = Besar   |   Rp. 10.000,-   |" << endl;
    cout << "|             |               |   S = Sedang  |   Rp. 4.250,-    |" << endl;
    cout << "|             |               |   K = Kecil   |   Rp. 2.100,-    |" << endl;
    cout << "|-------------|---------------|---------------|------------------|" << endl;
    cout << "|     2       |   Indomilk    |   B = Besar   |   Rp. 8.500,-    |" << endl;
    cout << "|             |               |   S = Sedang  |   Rp. 4.000,-    |" << endl;
    cout << "|             |               |   K = Kecil   |   Rp. 2.025,-    |" << endl;
    cout << "|-------------|---------------|---------------|------------------|" << endl;
    cout << "|     3       |   Sustacal    |   B = Besar   |   Rp. 17.000,-   |" << endl;
    cout << "|             |               |   S = Sedang  |   Rp. 14.500,-   |" << endl;
    cout << "|             |               |   K = Kecil   |   Rp. 8.300,-    |" << endl;
    cout << "|-------------|---------------|---------------|------------------|" << endl;

    cout << "Masukkan Kode (1-3)   :  ";
    cin >> kode;
    cout << "Masukkan Jumlah Pembelian  :  ";
    cin >> jumlah;
    cout << "Masukkan Ukuran (B/S/K)    :  ";
    cin >> ukuran;

    if (kode == 1){
        if (ukuran == "B"){
            cout << "   Dancow  " << endl;
            harga = 10000;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else if (ukuran == "S"){
            cout << "   Dancow  " << endl;
            harga = 4250;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else if (ukuran == "K"){
            cout << "   Dancow  " << endl;
            harga = 2100;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else{
            cout << "Ukuran tidak sesuai  " << endl;
        }
    }else if (kode == 2){
        if (ukuran == "B"){
            cout << "   Indomilk    " << endl;
            harga = 8500;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else if (ukuran == "S"){
            cout << "   Indomilk    " << endl;
            harga = 4000;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else if (ukuran == "K"){
            cout << "   Indomilk    " << endl;
            harga = 2025;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else{
            cout << "Ukuran tidak sesuai" << endl;
        }
    }else if (kode == 3){
        if (ukuran == "B"){
            cout << "   Sustacal    " << endl;
            harga = 17000;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else if (ukuran == "S"){
            cout << "   Sustacal    " << endl;
            harga = 14500;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else if (ukuran == "K"){
            cout << "   Sustacal    " << endl;
            harga = 8300;
            total = harga*jumlah;
            cout << "Harga Susu :   Rp.  " << harga << endl;
            cout << "Total Pembelian    :   Rp.  " <<total << endl;
        }else{
            cout << "Ukuran tidak sesuai" << endl;
        }
    }else{
        cout << "Kode tidak sesuai!" << endl;
    }

    return 0;
}
