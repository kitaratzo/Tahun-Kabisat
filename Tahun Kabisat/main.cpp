#include <iostream>

using namespace std;

int main()
{
    int a;
        cout<<"mencari tahun kabisat"<<endl;
        cout<<"masukkan tahun : ";
        cin>>a;
    if(a %100==0){
        cout << "Tahun " << a << " Adalah tahun kabisat kelipatan 100" << endl;
    }else if(a %4==0){
        cout << "Tahun " << a << " Adalah tahun kabisat kelipatan 4" << endl;
    }else if(a %400==0){
        cout << "Tahun " << a << " Adalah tahun kabisat kelipatan 400" << endl;
    }else{
        cout << "Tahun " << a << " Bukan tahun kabisat" << endl;
    }

    cin.get();
    return 0;
}
