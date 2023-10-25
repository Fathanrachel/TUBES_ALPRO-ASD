#include <iostream>
using namespace std;

// Struktur data untuk merepresentasikan node dalam binary tree
struct Node {
    int data_tree;
    Node* Left;
    Node* Right;
};

// Fungsi untuk membuat node baru dengan nilai tertentu
Node* buat_Node(int data_binary) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Gagal mengalokasikan!" << endl;
        return NULL;
    }
    newNode->data_tree = data_binary;
    newNode->Left = newNode->Right = NULL;
    return newNode;
}

// Fungsi untuk memasukkan node baru ke dalam binary tree
Node* masuk_Node(Node* root, int data_binary) {
    if (root == NULL) {
        root = buat_Node(data_binary);
        return root;
    }
    if (data_binary < root->data_tree) {
        root->Left = masuk_Node(root->Left, data_binary);
    } else if (data_binary > root->data_tree) {
        root->Right = masuk_Node(root->Right, data_binary);
    }
    return root;
}

// Fungsi untuk mencetak isi node dalam preorder
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data_tree << " ";
    preorder(root->Left);
    preorder(root->Right);
}

// Fungsi untuk mencetak isi node dalam inorder
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->Left);
    cout << root->data_tree << " ";
    inorder(root->Right);
}

// Fungsi untuk mencetak isi node dalam postorder
void postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->Left);
    postorder(root->Right);
    cout << root->data_tree << " ";
}

int main() {
    Node* root = NULL;
    int angka;
    char pilih;

    do {
        cout << "Masukkan nilai node baru: ";
        cin >> angka;
        root = masuk_Node(root, angka);

        cout << "Ingin menambahkan node lagi? (y/n): ";
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');

    cout << "Prosedur Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Prosedur Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Prosedur Postorder: ";
    postorder(root);

    return 0;
}
