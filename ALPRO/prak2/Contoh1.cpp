#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
int  k;
char *namakufathan, NMfathan[6] = {'F', 'A', 'T', 'H', 'A', 'N'};
cout << "Nama Ku " << endl;
cout << "~~~~~~~~~ " << endl;

for(k=0; k<6; k++){
namakufathan = &NMfathan[k];
cout << " " << *namakufathan << endl;
}
cin.get();
}
