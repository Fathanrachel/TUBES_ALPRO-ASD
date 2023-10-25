#include <iostream>
using namespace std;

int search01fathan(int A[], int, int);

int main() {
    const int JmlElemenArray_fathan = 11;
    int tika_fathan[JmlElemenArray_fathan] = {22, 61, 15, 66, 18, 25, 34, 87, 55, 45, 10};
    cout << "*************************************************" << endl;
    cout << "** S E Q U E N T I A L             S E A R C H **" << endl;
    cout << "*************************************************" << endl;

    cout << "Isi data nya adalah" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    for(int countFTHN = 0; countFTHN < JmlElemenArray_fathan; countFTHN++) {
        cout << "\t" << "Data [" << countFTHN << "]" << "--> " << tika_fathan[countFTHN] << endl;
    }
    int searchElemen_FT = 0;
    int flag_FT = 0;
    cout << "*************************************************" << endl;
    cout << endl;
    cout << "Masukkan data yang akan Anda cari ? ";
    cin >> searchElemen_FT;
    flag_FT = search01fathan(tika_fathan, JmlElemenArray_fathan, searchElemen_FT);
    if (flag_FT != -1) {
        cout << "Data yang dicari ditemukan pada posisi: Data [" << flag_FT << "]" << endl;
    } else {
        cout << "Data yang Anda cari tidak ditemukan" << endl;
    }

    cin.get();
    return 0;
} 

int search01fathan(int tika_fathan[], int JmlElemenArray_fathan, int Elemen_fathan) {
    int flag_fathan = -1;
    for(int count_fathan = 0; count_fathan < JmlElemenArray_fathan; count_fathan++) {
        if(Elemen_fathan == tika_fathan[count_fathan]) {
            flag_fathan = count_fathan;
            break;
        }
    }
    return flag_fathan;
}
