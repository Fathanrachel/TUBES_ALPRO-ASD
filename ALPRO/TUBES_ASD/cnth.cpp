/*Nama : Muhammad Rachel Fathan Idzhany
  NPM  : 4522210071
  Praktikum ASD -A-
  Tema : Pengecekan Tarif Listrik
  Materi : Struktur, Pointer, ADT-SDL-Linier Single Linked List, SDL-Stack, Graph DFS, HashTable
   */

#include <iostream>
#include <string.h>
#define tableSize 100 //dapat menyimpan data sebanyak 100
using namespace std;

// struct
struct Pelanggan
{
    string nama;
    double KWH;
    int daya;
    char ID[15];
};


// struct dan pointer
struct Node
{
    Pelanggan data;
    Node *trik;
}; 


// linkedlist, class, pointer
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }
    
    // fungsi nambah pelanggan
    void tambahPelanggan(Pelanggan pelanggan) {
        Node* newNode = new Node;
        newNode->data = pelanggan;
        newNode->trik = head;
        head = newNode;
    }

    // fungsi mengulang data head
    Node* getHead() {
    return head;
}   

    // fungsi menampilkan data  pelanggan yang telah tersimpan
    void tampilDataPelanggan() {
        Node* tampil = head;
        while (tampil != NULL) {
            cout << "Nama Pelanggan       : " << tampil->data.nama << endl;
            cout << "ID Pelanggan         : " << tampil->data.ID << endl;
            cout << "Daya Rumah           : " << tampil->data.daya << endl;
            cout << "Masukkan KWH Meteran : " << tampil->data.KWH << endl;

            double totalPembayaran = 0;
          
            if (tampil->data.daya <= 900) {
               totalPembayaran = tampil->data.KWH * 1352 * 30 ;
            }
            else if (tampil->data.daya <= 1300) {
                totalPembayaran = tampil->data.KWH * 1444.70 * 30 ;
            }
            else if (tampil->data.daya <= 3400) {
                totalPembayaran = tampil->data.KWH * 1444.70 * 30 ;
            }
            else if (tampil->data.daya >= 3500) {
                totalPembayaran = tampil->data.KWH * 1699.53 * 30;
            }

            cout << "Total Pembayaran Listrik     : Rp. " << totalPembayaran << " /Bulan" << endl;
            cout << endl;
            tampil = tampil->trik;
            cout << endl;
        }
    }
};

//hashtable, class, pointer
class HashTable {
private:
    Node* hashTable[tableSize];

public:
    HashTable() {
        for (int i = 0; i < tableSize; i++) {
            hashTable[i] = NULL;
        }
    }

    int hashFunction(const char* key) {
        int hash = 0;
        int index;

        for (int i = 0; i < strlen(key); i++) {
            hash += key[i];
        }

        index = hash % tableSize;
        return index;
    }
    
    // memasukkam data melalui hash table
    void insert(Pelanggan data) {
        int index = hashFunction(data.ID);

        Node* newNode = new Node;
        newNode->data = data;
        newNode->trik = NULL;

        if (hashTable[index] == NULL) {
            hashTable[index] = newNode;
        }
        else {
            Node* temp = hashTable[index];
            while (temp->trik != NULL) {
                temp = temp->trik;
            }
            temp->trik = newNode;
        }
    }

    // mencari data key  
    Pelanggan find(const char* key) {
        int index = hashFunction(key);

        Node* temp = hashTable[index];
        while (temp != NULL) {
            if (strcmp(temp->data.ID, key) == 0) {
                return temp->data;
            }
            temp = temp->trik;
        }

        // Jika key tidak ditemukan, kembalikan data dengan nilai kosong
        Pelanggan emptyData;
        emptyData.nama = "";
        emptyData.KWH = 0;
        emptyData.daya = 0;
        strcpy(emptyData.ID, "");
        return emptyData;
    }
};

//stack, class, pointer
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(Pelanggan pelanggan) {
        Node* newNode = new Node;
        newNode->data = pelanggan;
        newNode->trik = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack kosong" << endl;
            return;
        }
        Node* temp = top;
        top = top->trik;
        delete temp;
    }

    Pelanggan getTop() {
        if (top == NULL) {
            // Jika stack kosong, kembalikan data dengan nilai kosong
            Pelanggan emptyData;
            emptyData.nama = "";
            emptyData.KWH = 0;
            emptyData.daya = 0;
            strcpy(emptyData.ID, "");
            return emptyData;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }
};


//Function GraphDFS untuk melakukan pencarian Daya Rumah Dengan Data yang tersimpan
void GraphDFS(Node* node, int Targetdaya){
    if (node == NULL)
    {
        return;
    }
  
    if (node -> data.daya == Targetdaya)
    {   
         cout << "Nama Pelanggan       : " << node->data.nama << endl;
         cout << "ID Pelanggan         : " << node->data.ID << endl;
         cout << "Daya Rumah           : " << node->data.daya << endl;
         cout << "Masukkan KWH Meteran : " << node->data.KWH << endl;
        
            double totalPembayaran = 0;
          
            if (node->data.daya <= 900) {
               totalPembayaran = node->data.KWH * 1352 * 30 ;
            }
            else if (node->data.daya <= 1300) {
                totalPembayaran = node->data.KWH * 1444.70 * 30 ;
            }
            else if (node->data.daya <= 3400) {
                totalPembayaran = node->data.KWH * 1444.70 * 30 ;
            }
            else if (node->data.daya >= 3500) {
                totalPembayaran = node->data.KWH * 1699.53 * 30;
            }

            cout << "Total Pembayaran Listrik     : Rp. " << totalPembayaran << " /Bulan" << endl;
            cout << endl;
        
    }
    GraphDFS(node->trik, Targetdaya);
}


//MENU PROGRAM
int main() {
    LinkedList urut;
    Pelanggan data;
    HashTable hashTable;
    Stack stak;
    int no, jumlahPelanggan, Targetdaya;
    char cariID[15];
    

    while (true) {
        cout << "====================> LAYANAN PENGECEKKAN TARIF LISTRIK <====================" << endl;
        cout << "-----------------------------------------------------------------------------" << endl;
        cout << "| NO |                                MENU                                  |" << endl;
        cout << "-----------------------------------------------------------------------------" << endl;
        cout << "| 1  | MASUKKAN DATA PELANGGAN                                              |" << endl;
        cout << "| 2  | TAGIHAN LISTRIK                                                      |" << endl;
        cout << "| 3  | CARI DATA HASH                                                       |" << endl;
        cout << "| 4  | CARI DATA LEWAT GRAPH                                                |" << endl;
        cout << "| 5  | BATAL                                                                |" << endl;
        cout << "| 6  | KELUAR                                                               |" << endl;
        cout << "=============================================================================\n";
        cout << "Masukkan Pilihan: "; cin >> no;
        cout << endl;

        switch (no) {
        case 1:
            cout << "Masukkan jumlah pelanggan: ";
            cin >> jumlahPelanggan;
            cout << endl;

            for (int i = 0; i < jumlahPelanggan; i++) {
                Pelanggan data;
                cout << "Pelanggan " << i + 1 << endl;
                cout << "Nama Pelanggan       : ";
                cin >> data.nama;
                cout << "ID Pelanggan         : ";
                cin >> data.ID;
                cout << "Daya Rumah           : ";
                cin >> data.daya;
                cout << "Masukkan KWH Meteran : ";
                cin >> data.KWH;

                urut.tambahPelanggan(data);
                hashTable.insert(data);
                stak.push(data);
                cout << endl;
            }
            break;

        case 2:
            cout << "Data Tagihan Pelanggan:" << endl;
            urut.tampilDataPelanggan();
            break;

        case 3:
            cout << "Masukkan ID Pelanggan yang ingin dicari: ";
            cin >> cariID;
            cout << endl;

            data  = hashTable.find(cariID);
            if (data.nama != "") {
                cout << "Data Pelanggan Ditemukan" << endl;
                cout << "Nama Pelanggan       : " << data.nama << endl;
                cout << "ID Pelanggan         : " << data.ID << endl;
                cout << "Daya Rumah           : " << data.daya << endl;
                cout << "Masukkan KWH Meteran : " << data.KWH << endl;

                double totalPembayaran = 0;
                if (data.daya <= 900) {
                  totalPembayaran = data.KWH * 1352 * 30 ;
                 }
                else if (data.daya <= 1300) {
                  totalPembayaran = data.KWH * 1444.70 * 30 ;
                  }
                else if (data.daya <= 3400) {
                  totalPembayaran = data.KWH * 1444.70 * 30 ;
                  }
                else if (data.daya >= 3500) {
                  totalPembayaran = data.KWH * 1699.53 * 30;
                  }

            cout << "Total Pembayaran Listrik     : Rp. " << totalPembayaran << " /Bulan" << endl;
            cout << endl;
            }
            else {
                cout << "Data Pelanggan Tidak Ditemukan" << endl;
            }
            break;

        case 4:
            cout << "Daya Rumah yang dicari : "; cin >> Targetdaya;
            cout << "DAFTAR PELANGGAN YANG MEMILIKI DAYA = " << Targetdaya << endl;
            cout << "============================================= \n";
            GraphDFS(urut.getHead(), Targetdaya);
            cout << endl;
            break;
          
          case 5:
            stak.pop();
            cout << "Data Pelanggan Teratas Telah Dihapus" << endl;
            cout << endl;
            break;

          case 6:
            cout << "TERIMA KASIH" << endl;
            return 0;

        default:
            cout << "Pilihan Anda Salah";
            break;
        }
    }
    return 0;
}