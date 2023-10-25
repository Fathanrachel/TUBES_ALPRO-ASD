#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctype.h>
#define HASHSIZE_fathan 100
#define KODEMK_fathan 30
#define NAMAMK_fathan 13
using namespace std;

struct HashData_fathan {
    char kode[KODEMK_fathan];
    char nama[NAMAMK_fathan];
};

static HashData_fathan* hashTable_fathan[HASHSIZE_fathan];

int characterAmount_fathan(char[]);
int hashFunction_fathan(HashData_fathan*);
void Insert_fathan(HashData_fathan*);
bool isIndexEmpty_fathan(int);
void deleting_fathan(HashData_fathan*);
void searching_fathan(HashData_fathan*);
void DisplayTable_fathan();
void Clear_fathan();

int main() {
    char ulang_fathan = 'Y';
    char menu_fathan;
    do {
        system("cls");
        cout << "       PROSES HASH TABLE           \n";
        cout << endl;
        cout << "1. Input   \n";
        cout << "2. Delete  \n";
        cout << "3. Find    \n";
        cout << "4. Display \n";
        cout << "x. Keluar  \n";
        cout << endl;
        cout << "menu_fathan Pilihan Anda : ";
        cin >> menu_fathan;

        switch (menu_fathan) {
            case '1':
                HashData_fathan* array;
                array = new HashData_fathan;
                cout << endl;
                cout << "KODEMK_fathan          : ";
                cin >> array->kode;
                cout << "Mata Kuliah     : ";
                cin >> array->nama;
                cout << endl;
                Insert_fathan(array);
                break;

            case '2':
                HashData_fathan* hapus;
                hapus = new HashData_fathan;
                cout << "Hapus MataKuliah(KODEMK_fathan) ";
                cin >> hapus->kode;
                deleting_fathan(hapus);
                break;

            case '3':
                HashData_fathan* cari;
                cari = new HashData_fathan;
                cout << "Cari MataKuliah (KODEMK_fathan) : ";
                cin >> cari->kode;
                searching_fathan(cari);
                break;

            case '4':
                DisplayTable_fathan();
                break;

            case '5':
                Clear_fathan();
                cout << "Table hash Telah Dikosongkan " << endl;
                break;

            case 'x':
            case 'X':
                ulang_fathan = 'T';
                break;

            default:
                cout << "Pilihan Diluar menu_fathan Yang Tersedia " << endl;
                break;
        }
        cin.ignore();

    } while (toupper(ulang_fathan) == 'Y');
}

int characterAmount_fathan(char array[]) {
    int jumlah = 0;
    int i;
    for (i = 0; array[i] != '\0'; i++) {
        jumlah++;
    }
    return jumlah;
}

int hashFunction_fathan(HashData_fathan* array) {
    int value = 0, rec, n;
    n = characterAmount_fathan(array->kode);
    for (int i = 0; i < n; i++) {
        value += array->kode[i];
    }
    rec = value % HASHSIZE_fathan;
    return rec;
}

bool isIndexEmpty_fathan(int rec) {
    if (hashTable_fathan[rec] == NULL)
        return true;
    else
        return false;
}

int searching_fathanProcess(HashData_fathan* cari, int rec) {
    int m, n, j = 0;
    bool equal = true;
    if (isIndexEmpty_fathan(rec) == false) {
        n = characterAmount_fathan(cari->kode);
        m = characterAmount_fathan(hashTable_fathan[rec]->kode);
        if (n == m) {
            while ((equal == true) && (cari->kode[j] != '\0')) {
                if (tolower(cari->kode[j]) != tolower(hashTable_fathan[rec]->kode[j]))
                    equal = false;
                j++;
            }
            if (equal == true)
                return rec;
            else
                return -1;
        } else
            return -1;
    } else
        return -1;
}

void Insert_fathan(HashData_fathan* array) {
    int rec;
    rec = hashFunction_fathan(array);
    hashTable_fathan[rec] = array;
    cout << "Input Succesfull ! " << endl;
    cout << "Data Disimpan Pada Record Indeks " << rec << endl;
    cin.ignore();
}

void deleting_fathan(HashData_fathan* hapus) {
    int rec;
    rec = hashFunction_fathan(hapus);
    rec = searching_fathanProcess(hapus, rec);
    if (rec >= 0) {
        cout << "Data  : " << endl;
        cout << "   =>  KODEMK_fathan        : " << hashTable_fathan[rec]->kode << endl;
        cout << "   =>  MataKuliah    : " << hashTable_fathan[rec]->nama << endl;
        cout << "terhapus! " << endl;
        hashTable_fathan[rec] = NULL;
    } else
        cout << "Maaf! Data Tidak Ditemukan \n";
    cin.ignore();
}

void searching_fathan(HashData_fathan* cari) {
    int rec;
    rec = hashFunction_fathan(cari);
    rec = searching_fathanProcess(cari, rec);
    if (rec >= 0) {
        cout << "Data Ditemukan Pada Record Indeks " << rec << endl;
        cout << "Isi Data   : " << endl;
        cout << "=> KODEMK_fathan      : " << hashTable_fathan[rec]->kode << endl;
        cout << "=> MataKuliah  : " << hashTable_fathan[rec]->nama << endl;
    } else
        cout << "Maaf! Data Tidak Ditemukan " << endl;
    cin.ignore();
}

void DisplayTable_fathan() {
    cout << endl;
    cout << "|========|==============|================================|" << endl;
    cout << "| Indeks |    KODEMK    |         Nama Mata Kuliah       |" << endl;
    cout << "|========|==============|================================|" << endl;
    for (int i = 0; i < HASHSIZE_fathan; i++) {
        if (isIndexEmpty_fathan(i) == false)
            cout << setw(6) << i << "    " << hashTable_fathan[i]->kode << "\t       " << hashTable_fathan[i]->nama << endl;
    }
    cin.ignore();
}

void Clear_fathan() {
    for (int i = 0; i < HASHSIZE_fathan; i++) {
        hashTable_fathan[i] = NULL;
    }
}
