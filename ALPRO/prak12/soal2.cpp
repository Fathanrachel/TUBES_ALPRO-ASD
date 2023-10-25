#include <iostream>
using namespace std;

struct data_fathan {
    int key_fathan;
    int value_fathan;
};

struct data_fathan *array;
int capacity_fathan = 10;
int size_ = 0;

int hashcode_fathan(int key_fathan) {
    return (key_fathan % capacity_fathan);
}

int get_prime_fathan(int n) {
    if (n % 2 == 0) {
        n++;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            i = 1;
            n += 2;
        }
    }
    return n;
}

int is_prime_fathan(int n) {
    if (n == 2 || n == 3) {
        return 1;
    }
    if (n == 1 || n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void init_array_fathan() {
    capacity_fathan = get_prime_fathan(capacity_fathan);
    array = new struct data_fathan[capacity_fathan];
    for (int i = 0; i < capacity_fathan; i++) {
        array[i].key_fathan = 0;
        array[i].value_fathan = 0;
    }
}

void insert_fathan(int key_fathan) {
    int index_fathan = hashcode_fathan(key_fathan);
    if (array[index_fathan].value_fathan == 0) {
        array[index_fathan].key_fathan = key_fathan;
        array[index_fathan].value_fathan = 1;
        size_++;
        cout << "Kunci " << key_fathan << " Setelah Di insert " << key_fathan << endl;
    } else if (array[index_fathan].key_fathan == key_fathan) {
        cout << "Kunci " << key_fathan << " Update Kunci " << key_fathan << endl;
        array[index_fathan].value_fathan += 1;
    } else {
        cout << "Elemen Tidak dapat Di insert" << endl;
    }
}

void remove_element_fathan(int key_fathan) {
    int index_fathan = hashcode_fathan(key_fathan);
    if (array[index_fathan].value_fathan == 0) {
        cout << "Kunci Tidak Ada" << endl;
    } else {
        array[index_fathan].key_fathan = 0;
        array[index_fathan].value_fathan = 0;
        size_--;
        cout << "Kunci " << key_fathan << " telah di hapus " << key_fathan << endl;
    }
}

void display_fathan() {
    for (int i = 0; i < capacity_fathan; i++) {
        if (array[i].value_fathan == 0) {
            cout << "Array " << i << " Tidak ada element" << endl;
        } else {
            cout << "Array " << i << " Mempunyai Elemen Kunci " << array[i].key_fathan << " dan nilai " << array[i].value_fathan << endl;
        }
    }
}

int size_of_hashtable() {
    return size_;
}

int main() {
    int choice, key_fathan, value_fathan, n, c;
    init_array_fathan();
    do {
        cout << "Implementasi Penggunaan HASH TABLE" << endl;
        cout << "==================================" << endl;
        cout << "              M E N U             " << endl;
        cout << "==================================" << endl;
        cout << " 1. Sisip item pada HASH TABLE    " << endl;
        cout << " 2. Hapus Item dari Hash Table    " << endl;
        cout << " 3. Cek Ukuran pada HASH TABLE    " << endl;
        cout << " 4. Menampilkan HASH TABLE        " << endl;
        cout << "==================================" << endl;
        cout << "PILIHAN ANDA: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Sisip item pada HASH TABLE" << endl;
                cout << "Masukkan Kunci : ";
                cin >> key_fathan;
                insert_fathan(key_fathan);
                break;
            case 2:
                cout << "Hapus Item dari Hash Table" << endl;
                cout << "Masukkan Kunci : ";
                cin >> key_fathan;
                remove_element_fathan(key_fathan);
                break;
            case 3:
                n = size_of_hashtable();
                cout << "Ukuran pada HASH TABLE: " << n << endl;
                break;
            case 4:
                display_fathan();
                break;
            default:
                cout << "Salah Input" << endl;
                break;
        }
        cout << "Melanjutkan (Tekan 1 apabila YA): ";
        cin >> c;
    } while (c == 1);
    cin.ignore();
    return 0;
}
