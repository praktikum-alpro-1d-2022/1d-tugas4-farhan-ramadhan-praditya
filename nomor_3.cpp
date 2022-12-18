#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Tahun: ";
    cin >> a;

    if (a % 400 == 0)
    {
        cout << a << " adalah tahun kabisat." << endl;
    }
    else if (a % 100 == 0)
    {
        cout << a << " bukan tahun kabisat." << endl;
    }
    else if (a % 4 == 0)
    {
        cout << a << " adalah tahun kabisat." << endl;
    }
    else
    {
        cout << a << " bukan tahun kabisat." << endl;
    }

    return 0;
}
