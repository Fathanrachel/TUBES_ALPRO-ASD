#include <iostream>
using namespace std;


void Binsearch(int A_fathan[], int N_fathan, int F_fathan){
  int Lo_fh, Hi_fh, Mid_fh, Flag_fathan;
    
  Lo_fh = 0; Hi_fh = F_fathan - 1; Flag_fathan = 0;
    
  while (Lo_fh <= Hi_fh && Flag_fathan == 0)
    {
        Mid_fh = (Lo_fh + Hi_fh)/2;
        if (N_fathan == A_fathan[Mid_fh])
        {
            Flag_fathan = 1;
        }
        else if (N_fathan < A_fathan[Mid_fh])
        {
            Hi_fh = Mid_fh - 1;
        }else{
            Lo_fh = Mid_fh + 1;
        }
        
    }
    if (Flag_fathan == 1)
    {
        cout << "Nilai " << N_fathan << " ditemukan pada baris ke " << (Mid_fh + 1) << endl;
    }else
    {
        cout << "Nilai Tidak ditemukan " << endl;
    }
    
}

int main(){
    int fathan_i, fathan_N, F_fathan;
    int deret[20];
    cout << "Masukkan Jumlah elemen: ";
    cin >> F_fathan;

    cout << "Masukkan Elemen angka yang diinginkan: " << endl;
    for (int i = 0; i < F_fathan; i++) {
        cout << "Elemen [" << i+1 << "]: ";
        cin >> deret[i];
      }
  
    cout << "DAFTAR NILAI/ANGKA: " << endl;
    for(fathan_i = 0; fathan_i < F_fathan; fathan_i++){
        cout << "  " << deret[fathan_i] << endl;
    }
    cout << "Masukkan Data yang dicari: "; cin >> fathan_N;
    Binsearch(deret,fathan_N,F_fathan);
}