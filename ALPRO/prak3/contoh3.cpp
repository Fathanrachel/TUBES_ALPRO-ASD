#include <iostream>
using namespace std;

class Mahasiswaft{
public:
char NPMfthn[11];
char namafthn[30];
float ipkfthn;
};

int main(){
Mahasiswaft fthn;

cout << "Nomor Pokok Mahasiswa      = ";
cin >> fthn.NPMfthn;
cout << "Nama Mahasiswa             = ";
cin >> fthn.namafthn;
cout << "Indek Presentasi Komulatif = ";
cin >> fthn.ipkfthn;
cout << endl;

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "           DATA ANDA " << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

cout << "Nomor Pokok Mahasiswa      = " << fthn.NPMfthn << endl;
cout << "Nama Mahasiswa             = " << fthn.namafthn << endl;
cout << "Indek Presentasi Komulatif = " << fthn.ipkfthn << endl;
cin.get();
}