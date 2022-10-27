#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Menu Restaurant Mc'Yahud   :" << endl;
    cout << "1. Nasi Goreng Informatika     Rp. 5.000,-" << endl;
    cout << "2. Nasi Soto Ayam Internet     Rp. 7.000,-" << endl;
    cout << "3. Gado-gado Disket     Rp. 4.500,-" << endl;
    cout << "4. Bubur Ayam LAN     Rp. 4.000,-" << endl;
    cout << "Masukan Pilihan Anda   :";
    cin >> a;

    if (a == 1){
        cout << "Pilihan No. 1 Nasi Goreng Informatika     Rp. 5.000,-" << endl;
    }else if (a == 2){
        cout << "Pilihan No. 2 Nasi Soto Ayam Internet    Rp. 7.000,-" << endl;
    }else if (a == 3){
        cout << "Pilihan No. 3 Gado-gado Disket    Rp. 4.500,-" << endl;
    }else if (a == 4){
        cout << "Pilihan No. 4 Bubur Ayam LAN    Rp. 4.000,-" << endl;
    }else{
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
