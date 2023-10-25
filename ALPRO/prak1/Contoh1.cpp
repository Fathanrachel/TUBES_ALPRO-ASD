#include <iostream>
#include <string>
using namespace std;

int main(){

struct MATAKULIAHfathan{
string namafathan;
int sksfathan;
char nHuruffathan;
float nAngkafathan;
};

MATAKULIAHfathan DATA_MKfathan;

DATA_MKfathan.namafathan = "Algoritma dan pemrograman 2";
DATA_MKfathan.sksfathan = 3;
DATA_MKfathan.nHuruffathan = 'A';
DATA_MKfathan.nAngkafathan = 4.00;
cout << endl;
cout << endl;

cout << "Mata Kuliah = " << DATA_MKfathan.namafathan << endl;
cout << "Jumlah sks  = " << DATA_MKfathan.sksfathan << endl;
cout << "Nilai       = " << DATA_MKfathan.nHuruffathan << endl;
cout << "Indeks      = " << DATA_MKfathan.nAngkafathan << endl;
cin.get();
}
