#include <iostream>
using namespace std;


struct Node {
    int data_tree;
    Node* Leftfathan;
    Node* Rightfathan;
};


Node* buat_Node(int data_binary) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Gagal mengalokasikan!" << endl;
        return NULL;
    }
    newNode->data_tree = data_binary;
    newNode->Leftfathan = newNode->Rightfathan = NULL;
    return newNode;
}


Node* masuk_Node(Node* root_angka, int data_binary) {
    if (root_angka == NULL) {
        root_angka = buat_Node(data_binary);
        return root_angka;
    }
    if (data_binary < root_angka->data_tree) {
        root_angka->Leftfathan = masuk_Node(root_angka->Leftfathan, data_binary);
    } else if (data_binary > root_angka->data_tree) {
        root_angka->Rightfathan = masuk_Node(root_angka->Rightfathan, data_binary);
    }
    return root_angka;
}


void preorder(Node* root_urut) {
    if (root_urut == NULL) {
        return;
    }
    cout << root_urut->data_tree << " ";
    preorder(root_urut->Leftfathan);
    preorder(root_urut->Rightfathan);
}


void inorder(Node* data) {
    if (data == NULL) {
        return;
    }
    inorder(data->Leftfathan);
    cout << data->data_tree << " ";
    inorder(data->Rightfathan);
}


void postorder(Node* prosedur) {
    if (prosedur == NULL) {
        return;
    }
    postorder(prosedur->Leftfathan);
    postorder(prosedur->Rightfathan);
    cout << prosedur->data_tree << " ";
}

int main() {
    Node* fathan = NULL;
    int angka;
    char pilih;

    do {
        cout << "Masukkan nilai node baru: ";
        cin >> angka;
        fathan = masuk_Node(fathan, angka);

        cout << "Ingin menambahkan node lagi? (y/n): ";
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');

    cout << "Prosedur Preorder: ";
    preorder(fathan);
    cout << endl;
    cout << "Prosedur Inorder: ";
    inorder(fathan);
    cout << endl;
    cout << "Prosedur Postorder: ";
    postorder(fathan);

    return 0;
}
