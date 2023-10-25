#include <iostream>
using namespace std;

struct Nodefathan {
int NilaiUTSfthn;
int NilaiUASfthn;
int F1, F2;
};
Nodefathan *Pf, *Qf;

int main(){
Pf = new Nodefathan;
Pf -> F1 = 99;
Qf = new Nodefathan;
Qf -> F2 =78;

cout << endl;
cout << "Isi Variabel P = " << Pf -> F1 << endl;
cout << "Isi Variabel Q = " << Qf -> F2 << endl;
cout << endl;
cin.get();
}