#include <iostream>
using namespace std;
#define n_FT 10

int main(){
    int N_fathan;
    int A_fathan[n_FT] = {4, 7, 10, 11, 16, 22, 24, 28, 63, 66};
    int i_fh, Lo_fh, Hi_fh, Mid_fh, Flag_fathan;
    cout << "DAFTAR NILAI/ANGKA: " << endl;
    for(i_fh = 0; i_fh <= n_FT - 1; i_fh++)
    {
        cout << "  " << A_fathan[i_fh] << endl;
    }
    cout << "Masukkan data yang dicari: "; cin >> N_fathan;
    Lo_fh = 0; Hi_fh = n_FT - 1; Flag_fathan = 0;
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
