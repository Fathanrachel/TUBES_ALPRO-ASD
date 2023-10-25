#include <iostream>
using namespace std;

int main(){

int f, *pnfathan, **ppnfathan;
f = 44;
pnfathan = &f;
ppnfathan = &pnfathan;
cout << endl;
cout << " Isi variabel (f - *pnfathan - *ppnfathan)      = " << f << " - " << *pnfathan << " - " << *ppnfathan << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << endl;
cout << " Alamat variabel (&f - &pnfathan - &ppnfathan)  = " << &f << " - " << &pnfathan << " - " << &ppnfathan << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << endl;
cout << " Isi variabel dalam HEXA (f-pnfathan-ppnfathan) = " << f << " - " << pnfathan << " - " << ppnfathan << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << endl;
cin.get();
}