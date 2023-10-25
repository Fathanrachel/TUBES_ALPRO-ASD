#include <iostream>
using namespace std;

struct Mahasiswafathan{
char NPMft[11];
char namaft[30];
float ipkft;
};

int main(){
Mahasiswafathan ft;

cout << "Nomor Pokok Mahasiswa      = ";
cin >> ft.NPMft;
cout << "Nama Mahasiswa             = ";
cin >> ft.namaft;
cout << "Indek Presentasi Komulatif = ";
cin >> ft.ipkft;
cout << endl;

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "          DATA ANDA " << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

cout << "Nomor Pokok Mahasiswa      = " << ft.NPMft << endl;
cout << "Nama Mahasiswa             = " << ft.namaft << endl;
cout << "Indek Presentasi Komulatif = " << ft.ipkft << endl;
cin.get();
}