#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string username, password;
    cout << "Masukan Username   :";
    cin >> username;
    cout << "Masukan Password   :";
    cin >> password;

    if (username == "Terbang" && password == "Jatuh"){
        cout << "Username dan Password sesuai" << endl;
        cout << "Login Berhasil" << endl;
    }else if (username != "Terbang" && password == "Jatuh"){
        cout << "Username tidak sesuai, Password sesuai" << endl;
        cout << "Login Gagal" << endl;
    }else if (username == "Terbang" && password != "Jatuh"){
        cout << "Username sesuai, Password tidak sesuai" << endl;
        cout << "Login Gagal" << endl;
    }else{
        cout << "Username tidak sesuai, Password tidak sesuai" << endl;
        cout << "Login Gagal" << endl;
    }

    return 0;
}
