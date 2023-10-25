#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void BUAT_SIMPULfthn(int F);
void AWALfthn();
void CETAKfthn();
void INSERTKANANfthn();

struct Nodeft{
	int INFOFT;
	struct Nodeft *LINKfthn; 
};
typedef struct Nodeft Simpulfthn;
Simpulfthn *R, *FIRSTfthn, *LASTfthn, *C;
int F;

int main(){
	int A[7] = {22,28,7,11,66,63,10};
	int H;
	FIRSTfthn = NULL;
	H = 0;
	F = A[H];
	BUAT_SIMPULfthn(F);
	AWALfthn();
	for (H = 1; H <= 6; H++)
	{
		F = A[H];
		BUAT_SIMPULfthn(F);
		INSERTKANANfthn();
	}
	cout << "Nilai Sebelum Dilakukan Insert Kanan : ";
	CETAKfthn();
	F = 100;
	BUAT_SIMPULfthn(F);
	INSERTKANANfthn();
	cout << endl;
	cout << "Nilai Setelah Dilakukan Insert Kanan : ";
	CETAKfthn();
	cout << endl;
	cin.get();
}

void BUAT_SIMPULfthn(int F)
{
	R = (Simpulfthn*) malloc(sizeof(Simpulfthn));
	if (R != NULL)
	{
		R -> INFOFT = F;
	}
	else 
	{
		cout << "Pembuatan Simpul Tidak Berhasil " << endl;
		cin.get();
		exit(1);		
	}
}

void AWALfthn()
{
	FIRSTfthn = R;
	LASTfthn = R;
	R -> LINKfthn = NULL;
}

void INSERTKANANfthn()
{
	LASTfthn -> LINKfthn = R;
	LASTfthn = R;
	R -> LINKfthn = NULL;
}

void CETAKfthn()
{
	int X;
	C = FIRSTfthn;
	while (C != NULL){
		X = C -> INFOFT;
		cout << " " << X;
	C = C -> LINKfthn;}
}