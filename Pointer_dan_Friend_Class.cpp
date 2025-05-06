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
    //Lingkaran ol;
};

class Lingkaran
{
    public:
    int jarijari;

    void input()
    {
        cout << "Masukkan Jari-Jari : ";
        cin >> jarijari;
    }

    int luaslingkaran(int r)
    {
        return 3.14 * r * r;
    }
};