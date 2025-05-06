#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: //akses modifer
    int panjang, lebar;

    public:
    void input()
    {
        cout << "Masukkan Panjang : "; 
        cin >> panjang; //Memasukkan Panjang
        cout << "Masukkan Lebar : ";
        cin >> lebar; //Memasukkan Lebar
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }
}