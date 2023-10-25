#include <iostream>
using namespace std;

class Marge{
private:
void mergefathan(int, int, int);
void merge_sortFTHN(int lowfathan, int highfathan);

public:
int f[50];
};
Marge ASD;

void mergefathan(int, int, int);

void merge_sortFTHN(int lowfathan, int highfathan){
int midfathan;
if(lowfathan < highfathan){
midfathan = (lowfathan + highfathan)/2;
merge_sortFTHN(lowfathan, midfathan);
merge_sortFTHN(midfathan + 1, highfathan);
mergefathan(lowfathan, midfathan, highfathan);
}
}

void mergefathan(int Low, int Mid, int High){
int H,I,J,B[50],K;
H = Low;
I = Low;
J = Mid + 1;
while((H <= Mid) && (J <= High)){
if(ASD.f[H] <= ASD.f[J]){
B[I] = ASD.f[H]; H++;
}
else{
B[I] = ASD.f[J]; J++;
}I++; }
if(H > Mid){
for(K = J; K <= High; K++){
B[I] = ASD.f[K]; I++; } }
else{
for(K = H; K <= Mid; K++){
B[I] = ASD.f[K]; I++; } }
for(K = Low; K <= High; K++){
ASD.f[K] = B[K];}
}


int main(){
int numfathan, R;
 
cout << "****************************************" << endl;
cout << "           MERGE SORT PROGRAM           " << endl;
cout << "****************************************" << endl;
cout << endl;
cout << "Masukkan banyak bilangan: "; cin >> numfathan;
cout << endl;
cout << "Sekarang masukkan " << numfathan << " Bilangan yang diurutkan: " << endl;
for(R = 1; R <= numfathan; R++){
cout << "Bilangan ke- " << R << ": "; cin >> ASD.f[R];
}
merge_sortFTHN(1, numfathan); cout << endl;
cout << "Hasil akhir pengurutan: " << endl;
cout << endl;  
for(R = 1; R <= numfathan; R++){
cout << ASD.f[R] << " ";
cout << endl << endl << endl << endl;
}
  cin.get();
}