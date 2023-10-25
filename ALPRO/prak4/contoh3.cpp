#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100
#define true 1
#define false 0

struct biodatafathan{
char namafthn[20];
int usiaft;
};

struct biodatafathan mhsft;
struct biodatafathan queueft [MAX];
void initft(void);
int fullft(void);
int emptyft(void);
struct biodatafathan entridataft(void);
void enqueueft(struct biodatafathan mhsft);
struct biodatafathan dequeueft(void);
void displayft(struct biodatafathan mhsft);
void bacaFT(void);
int awalfthn, akhirfthn;
char nocomment[10];


int main(){
char pilihft;
cout << "== Program Entri Data Mahasiswa ==\n";
initft();
do{
cout << "MENU PILIHAN : \n";
cout << "1. Input Data\n";
cout << "2. Hapus Data\n";
cout << "3. Lihat Daftar Mahasiswa\n";
cout << "4. Hapus Semua Data\n";
cout << "5. Selesai.\n";
cout << "Pilih 1 sd 5 : ";
cin >> pilihft;
switch(pilihft){
case '1' : mhsft = entridataft(); enqueueft(mhsft); break;
case '2' : cout << "\nData yang dihapus : \n";
mhsft = dequeueft(); displayft(mhsft); break;
case '3' : bacaFT(); break;
case '4' : initft(); cout << "\nData telah dikosongkan\n"; break;
case '5' : break;
default  : cout << "Pilih 1 sd 5!";
break;
}
cout << "\n";
}while(pilihft != '5');
return 0;
} 

void initft(void){
awalfthn = -1;
akhirfthn = -1;
}

void enqueueft(struct biodatafathan mhsft){
if(emptyft() == true){
awalfthn = 0;
akhirfthn = 0;
queueft[awalfthn] = mhsft;
}else if(fullft() != true){
akhirfthn++;
queueft[akhirfthn]=mhsft;
}else cout << "Queue sudah penuh... \n"; 
}

struct biodatafathan dequeueft(void){
int I;
if(emptyft() != true){
	
mhsft=queueft[awalfthn];
for(I = awalfthn; I <= akhirfthn; I++)
queueft[I]=queueft[I + 1];
akhirfthn--;
return(mhsft);
}else cout << "Queue kosong...\n";

}

int fullft(void){
if(akhirfthn==MAX-1) return(true);
else return(false);
}

int emptyft(void){
if(akhirfthn == -1) return(true);
else return(false);
}

void bacaFT(void){
int i;
cout << "\nIsi Queue : \n";
if(emptyft() != true){
for(i = awalfthn; i <= akhirfthn; i++){
displayft(queueft[i]);
}
}else cout << "Data kosong. ";
cout << "\n";
}

struct biodatafathan entridataft(void){
struct biodatafathan mhsft;
cout << "\n";
cout << "Masukkan Nama : "; cin >> mhsft.namafthn;
cout << "Masukkan Usia : "; cin >> mhsft.usiaft;
return(mhsft);
}

void displayft(struct biodatafathan mhsft){
cout << "\n";
cout << "Nama : " << mhsft.namafthn << "\n";
cout << "Usia : " << mhsft.usiaft << "\n";
}