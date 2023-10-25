#include <iostream>
using namespace std;

class angkafthn{
public:
int harift;
};

int main (){
  angkafthn dayft;
  cout << "======== PENAMPILAN HARI-HARI =========" << endl;
  cout << endl;
  cout << "Masukkan Angka [0-6]: ";
  cin >> dayft.harift;
  cout << endl;

  switch(dayft.harift){
    case 0 : cout << "Hari Minggu";
    break;
    case 1 : cout << "Hari Senin";
    break;
    case 2 : cout << "Hari Selasa";
    break;
    case 3 : cout << "Hari Rabu";
    break;
    case 4 : cout << "Hari kamis";
    break;
    case 5 : cout << "Hari Jum'at";
    break;
    case 6 : cout << "Hari Sabtu";
    break;
    default: cout << "Hari tidak valid";
    
  }
}