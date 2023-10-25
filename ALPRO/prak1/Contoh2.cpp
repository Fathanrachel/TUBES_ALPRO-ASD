#include <iostream>
#include <string>
using namespace std;

struct koordinat_fathan {
int Xfathan;
int Yfathan;	};

void Tampil_Posisi(koordinat_fathan Posisi);

 int main(){
 koordinat_fathan Posisi;
 
 Posisi.Xfathan = 56;
 Posisi.Yfathan = 53;
 cout << endl;
 Tampil_Posisi(Posisi);
 cin.get();}
 
 void Tampil_Posisi(koordinat_fathan Posisi){
 cout << "posisi Ordinat X adalah: " << Posisi.Xfathan << endl;
 cout << "posisi Ordinat Y adalah: " << Posisi.Yfathan << endl;}