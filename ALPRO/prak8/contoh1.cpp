#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct NodeFT{
    char INFO_fathan;
    struct NodeFT* LEFT_FT;
    struct NodeFT* RIGHT_FT;
};

typedef struct NodeFT simpulfathan;
simpulfathan *Root_fathan, *P_fathan, *Q[30], *R_fathan, *current_fathan;
char X_FT;

void Inisialisasi_fathan(){
    Root_fathan = NULL;
    P_fathan = NULL;
};

void Buatsimpul_fathan(char X){
P_fathan = (simpulfathan*) malloc(sizeof(simpulfathan));
if(P_fathan != NULL){
    P_fathan->INFO_fathan = X;
    P_fathan->LEFT_FT = NULL;
    P_fathan->RIGHT_FT = NULL;
}
else{
    cout << "Pembuatan Simpul Gagal \n";
    exit(1);
}
}

void Buatsimpulakar_fathan(){
    if(Root_fathan == NULL){
        if (P_fathan != NULL)
        {
            Root_fathan = P_fathan;
            P_fathan->LEFT_FT = NULL;
            P_fathan->RIGHT_FT = NULL;
        }
        else{
            cout << "simpul belum dibuat \n";
        }
    }
    else{
        cout << "Pohon Sudah Ada !!!! \n";
    }
}

void inserturutNomer_fathan(char Input_fathan[6]){
    int i_FT, j_FT, flag_fathan;
    char X_FT;
    flag_fathan = 0;
    i_FT = 1;
    j_FT = 1;
    Q[i_FT] = Root_fathan;
    while (flag_fathan == 0 && j_FT < 6)
    {
        X_FT = Input_fathan[j_FT - 1];
        if (X_FT != '0')
        {
            Buatsimpul_fathan(X_FT);
            current_fathan = Q[i_FT];
            current_fathan ->LEFT_FT;
            j_FT++;
            Q[j_FT] = P_fathan;
        }
        else 
        {
            flag_fathan = 1;
            j_FT++;
            Q[j_FT] = NULL;
        }
        if (flag_fathan == 0)
        {
            X_FT = Input_fathan [j_FT - 1];
            if (X_FT != '0')
            {
                Buatsimpul_fathan(X_FT);
                current_fathan ->RIGHT_FT = P_fathan;
                j_FT++;
                Q[j_FT] = P_fathan;
            }
            
        }
        else{
            flag_fathan = 1;
            j_FT++;
            Q[j_FT] = NULL;
        }
        
    }
    i_FT++;
}

void BacaUrutNomer_fathan(){
    int F, j_FT, n_FT, Counter_FT;
    F=1; j_FT=1; n_FT=1; Counter_FT=0;
    int level_fathan = 0;
    while (Q[F] != NULL)
    {
        current_fathan = Q[F];
        if (F == 1)
        {
            cout << "Level " << level_fathan << "\n";
        }
        cout << current_fathan ->INFO_fathan << " - ";
        Counter_FT++;
        if (Counter_FT == n_FT)
        {
            level_fathan++;
            cout << "\nLevel " << level_fathan << " ";
        }
        if (Counter_FT == n_FT)
        {
            cout << endl;
            Counter_FT = 0;
            n_FT = n_FT*2;
        }
        if (current_fathan ->LEFT_FT != NULL)
        {
            j_FT++;
            Q[F] = current_fathan ->LEFT_FT;
        }
        if (current_fathan ->RIGHT_FT != NULL){
            j_FT++;
            Q[F] = current_fathan ->RIGHT_FT;
        }
        F++;   
    }
    
}


int main(){
    char root_fathan = 'C';
    char Daun_fathan[6] = {'A', 'B', 'D', 'E', 'F', 'G'};
    Inisialisasi_fathan();
    Buatsimpul_fathan(root_fathan);
    Buatsimpulakar_fathan();
    inserturutNomer_fathan(Daun_fathan);
    BacaUrutNomer_fathan();
    return 0;
    cin.get();
}