#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void BUAT_SIMPULfthn(int F);
void AWALfthn();
void CETAKfthn(int loop);
void INSERTKANANfthn();

typedef struct Nodeft Simpulfthn;
typedef struct Nodeft *SimpulFT;

struct Nodeft
{
    int INFOFT;
    struct Nodeft *RIGHTFT;
    struct Nodeft *LEFTFT;
};

Simpulfthn *R, *FIRSTfthn, *LASTfthn, *C;
int F;

int main()
{
    int A[8] = {1, 19, 21, 25, 36, 48, 52, 55};
    int H;
    FIRSTfthn = NULL;
    H = 0;
    F = A[H];
    BUAT_SIMPULfthn(F);
    AWALfthn();
    for (H = 1; H <= 7; H++)
    {
        F = A[H];
        BUAT_SIMPULfthn(F);
        INSERTKANANfthn();
    }
    cout << "Nilai Sebelum Dilakukan Insert Kanan : ";
    CETAKfthn(8);
    F = 63;
    BUAT_SIMPULfthn(F);
    INSERTKANANfthn();
    cout << endl;
    cout << endl;
    cout << "Nilai Setelah Dilakukan Insert Kanan : ";
    CETAKfthn(9);
    cout << endl;
    cin.get();
}

void BUAT_SIMPULfthn(int F)
{
    R = (Simpulfthn *)malloc(sizeof(Simpulfthn));
    if (R != NULL)
    {
        R->INFOFT = F;
    }
    else
    {
        cout << "Pembuatan Simpul Tidak Berhasil " << endl;
    }
}

void AWALfthn()
{
    if (FIRSTfthn == NULL)
    {
        FIRSTfthn = R;
        LASTfthn = R;
        R->RIGHTFT = R;
        R->LEFTFT = R;
    }
    else
        cout << "Linked list Sudah Ada" << endl;
}

void INSERTKANANfthn()
{

    LASTfthn->RIGHTFT = R;
    LASTfthn = R;
    LASTfthn->RIGHTFT = FIRSTfthn;
    FIRSTfthn->LEFTFT = LASTfthn;
}


void CETAKfthn(int loop)
{
    int X;
    C = FIRSTfthn;
    for (int i = 0; i < loop; i++)
    {
        X = C->INFOFT;
        cout << " " << X;
        C = C->RIGHTFT;
    }
}