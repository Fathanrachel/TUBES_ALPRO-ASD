#include <iostream>
using namespace std;

struct Elemen{
int JmlElemenArray_fathan;
int angka[100];
};

int search01fathan(int A[], int, int);

int main() {
  Elemen data;
  cout << "=================================================" << endl;
  cout << "**  M E T O D E            S E Q U E N T I A L **" << endl;
  cout << "=================================================" << endl;  
  
  cout << "Masukkan Jumlah elemen: ";
  cin >> data.JmlElemenArray_fathan;

  cout << "Masukkan Elemen angka yang diinginkan: " << endl;
  for (int i = 0; i < data.JmlElemenArray_fathan; i++) {
        cout << "Elemen [" << i << "]: ";
        cin >> data.angka[i];
    }
    cout << endl;
    cout << "*************************************************" << endl;
    cout << "** S E Q U E N T I A L             S E A R C H **" << endl;
    cout << "*************************************************" << endl;

    cout << "Isi data nya adalah" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    for(int F = 0; F < data.JmlElemenArray_fathan; F++) {
        cout << "\t" << "Data [" << F << "]" << "--> " << data.angka[F] << endl;
    }
    int searchElemen_FT = 0;
    int flag_FT = 0;
    cout << "*************************************************" << endl;
    cout << endl;
    cout << "Masukkan data yang akan Anda cari ? ";
    cin >> searchElemen_FT;
    flag_FT = search01fathan(data.angka, data.JmlElemenArray_fathan, searchElemen_FT);
  
    if (flag_FT != -1) {
        cout << "Data yang dicari ditemukan pada posisi Data Ke- [" << flag_FT << "]" << endl;
    } else {
        cout << "Data yang Anda cari tidak ditemukan" << endl;
    }

    cin.get();
    return 0;
} 


int search01fathan(int angka[], int JmlElemenArray_fathan, int Elemen_fathan) {
    int flag_fathan = -1;
    for(int count_fathan = 0; count_fathan < JmlElemenArray_fathan; count_fathan++) {
        if(Elemen_fathan == angka[count_fathan]) {
            flag_fathan = count_fathan;
            break;
        }
    }
    return flag_fathan;
}
