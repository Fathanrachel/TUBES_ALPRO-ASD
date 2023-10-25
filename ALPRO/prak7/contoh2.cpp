#include<string.h>
#include<iostream>
using namespace std;
#define MAXSIZE 30

void fibonacci_fathan (int *ft){
    ft[0] = 1;
    ft[1] = 1;
    for (int  i = 2; i < MAXSIZE; i++)
    {
        ft[i] = ft[i - 2] + ft[i - 1];
    }
}
    int fibonacci_searchfathan(int *aft, int key_fathan, int n_fathan)
    {
        int Rendah_FH = 0, Tinggi_FH = n_fathan - 1;
        int mid_FH = 0;
        int k_fathan = 0;
        int F_fathan[MAXSIZE];
        fibonacci_fathan(F_fathan);
        while (n_fathan > F_fathan[k_fathan] - 1)
        {
            ++k_fathan;
        }
            for (int i = n_fathan; i < F_fathan[k_fathan] - 1; i++)
            {
                aft[i] = aft[Tinggi_FH];
            }
            while (Rendah_FH <= Tinggi_FH)
            {
                mid_FH = Rendah_FH + F_fathan[k_fathan - 1] - 1;
                if (aft[mid_FH] > key_fathan)
                {
                    Tinggi_FH = mid_FH - 1;
                    k_fathan = k_fathan - 1;
                }
                else if(aft[mid_FH] < key_fathan){
                    Rendah_FH = mid_FH + 1;
                    k_fathan = k_fathan - 2;
                }
                else{
                    if(mid_FH <= Tinggi_FH){
                        return mid_FH;
                        }else{
                            return -1;
                        }
                    }
                }
       return -1; 
    }

    int main(){
        int a_fthn[MAXSIZE] = {1, 4, 6, 8, 9, 11, 23, 35, 47, 51, 55, 63, 64, 78, 88, 95, 99};
        int k_fthn;
        cout << "Masukkan angka yang akan dicari: "; cin >> k_fthn;
        int pos_fathan = fibonacci_searchfathan(a_fthn, k_fthn, 17);
        if(pos_fathan != -1){
            cout << "Data ditemukan pada posisi: " << pos_fathan + 1 << " Isi elemennya = " << k_fthn << endl;
        }else{
            cout << "Data tidak ditemukan " << endl;
        }
        cin.get();
        return 0;
    }
