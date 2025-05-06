#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); //MemberAccesOperator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Acces Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer Dereferences pMhs
    pMhs->nim = 3; //ArrowOperator
    pMhs->showNim();
    return 0;

  
}