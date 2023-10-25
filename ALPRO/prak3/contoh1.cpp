#include <iostream>
#include <string>
using namespace std;

typedef int angkafathan;
typedef float pecahanfathan;
typedef char huruffathan[30];
int main () {
angkafathan umurfthn;
pecahanfathan pecahfthn;
huruffathan namafthn;
huruffathan karakterfthn;

cout << "Masukkan umur anda: ";
cin >> umurfthn;
cout << "umur anda adalah " << umurfthn << endl;
cout << endl;

cout << "Masukkan bilangan pecahan: ";
cin >> pecahfthn;
cout << "Bilang pecahan " << pecahfthn << endl;
cout << endl;

cout << "Masukkan nama: ";
cin >> namafthn;
cout << "Nama anda " << namafthn << endl;
cout << endl;

cout << "Masukkan satu huruf: ";
cin >> karakterfthn;
cout << "Huruf anda " << karakterfthn << endl;
cin.get();

}
