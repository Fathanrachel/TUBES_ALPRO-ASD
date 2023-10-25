#include<iostream>
using namespace std;


void HEAP_fathan(int CanArray_fathan[], int n_fathan, int i) {
    int temp_fathan;
    int CanBesar_fathan = i;
    int kiri_fathan = 2 * i + 1;
    int kanan_fathan = 2 * i + 2;
    if (kiri_fathan < n_fathan && CanArray_fathan[kiri_fathan] > CanArray_fathan[CanBesar_fathan])
        CanBesar_fathan = kiri_fathan;
    if (kanan_fathan < n_fathan && CanArray_fathan[kanan_fathan] > CanArray_fathan[CanBesar_fathan])
        CanBesar_fathan = kanan_fathan;
    if (CanBesar_fathan != i) {
        temp_fathan = CanArray_fathan[i];
        CanArray_fathan[i] = CanArray_fathan[CanBesar_fathan];
        CanArray_fathan[CanBesar_fathan] = temp_fathan;
        HEAP_fathan(CanArray_fathan, n_fathan, CanBesar_fathan);
    }
}

void SortHEAP_fathan(int CanArray_FTHN[], int n) {
    int temp_FTHN;
    for (int i = n / 2 - 1; i >= 0; i--)
        HEAP_fathan(CanArray_FTHN, n, i);
    for (int i = n - 1; i > 0; i--) {
        temp_FTHN = CanArray_FTHN[0];
        CanArray_FTHN[0] = CanArray_FTHN[i];
        CanArray_FTHN[i] = temp_FTHN;
        HEAP_fathan(CanArray_FTHN, i, 0);
    }
}

int main() {
    int n_FATHAN = 10;
    int CanArray_FATHAN[] = {22, 7, 66, 28, 11, 63, 24, 12, 77, 99};

    cout << "sebelum penguruan: " << endl;
     for (int i = 0; i < n_FATHAN; i++){
        cout << CanArray_FATHAN[i] << " ";
     }
        cout << endl;
        cout << endl;
    
  SortHEAP_fathan(CanArray_FATHAN, n_FATHAN);

    cout << "Hasil pengurutan menggunakan Heap Sort: " << endl;
    for (int i = 0; i < n_FATHAN; i++){
      cout << CanArray_FATHAN[i] << " ";
    }
        cout << endl;

    return 0;
}
