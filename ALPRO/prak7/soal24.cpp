#include <iostream>
using namespace std;
#define MAXSIZE 30

struct fibon {
    int k_fthn;
    int a_fthn[MAXSIZE];
};

void fibonacci_fathan(int *ft, int deret) {
    ft[0] = 1;
    ft[1] = 1;
    for (int i = 2; i < deret; i++) {
        ft[i] = ft[i - 2] + ft[i - 1];
    }
}

int fibonacci_searchfathan(int *aft, int key_fathan, int angka) {
    int low = 0, high = angka - 1;
    int mid = 0;
    int k = 0;
    int F[MAXSIZE];
    fibonacci_fathan(F, MAXSIZE);
    while (angka > F[k] - 1) {
        k++;
    }
    for (int i = angka; i < F[k] - 1; i++) {
        aft[i] = aft[high];
    }
    while (low <= high) {
        mid = low + F[k - 1] - 1;
        if (aft[mid] > key_fathan) {
            high = mid - 1;
            k = k - 1;
        } else if (aft[mid] < key_fathan) {
            low = mid + 1;
            k = k - 2;
        } else {
            if (mid <= high) {
                return mid;
            } else {
                return -1;
            }
        }
    }
    return -1;
}

int main() {
    fibon data;
    cout << "Masukkan jumlah elemen data: ";
    cin >> data.k_fthn;

    cout << "Masukkan isi elemen data:" << endl;
    for (int i = 0; i < data.k_fthn; i++) {
        cout << "Elemen [" << i << "]: ";
        cin >> data.a_fthn[i];
    }

    int key;
    cout << "Masukkan angka yang akan dicari: ";
    cin >> key;

    int pos_fathan = fibonacci_searchfathan(data.a_fthn, key, data.k_fthn);
    if (pos_fathan != 0) {
        cout << "Data ditemukan pada posisi: " << pos_fathan << ". Isi elemennya = " << key << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
