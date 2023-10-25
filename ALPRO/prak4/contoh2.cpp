#include <iostream>
#include <string.h>
using namespace std;

struct NodeFT {
int datafthn;
NodeFT *LINKFT;
};

class LListfthn{
private:
NodeFT *FIRSTfthn, *LASTfthn, *C;
public:
LListfthn();
int INSERTKIRIfthn(int datafthn);
void CETAKFT1();
void CETAKFT2();
};


int main(){
LListfthn Ff;
Ff.INSERTKIRIfthn(22);
Ff.INSERTKIRIfthn(66);
Ff.INSERTKIRIfthn(28);
Ff.INSERTKIRIfthn(63);
Ff.INSERTKIRIfthn(10);
Ff.CETAKFT1();
cout << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << "Nilai: ";
Ff.CETAKFT2();
cin.get();
}


LListfthn :: LListfthn(){
FIRSTfthn = NULL;
}

int LListfthn :: INSERTKIRIfthn(int rh){
NodeFT *R;
R = new NodeFT;
R -> LINKFT = FIRSTfthn;
R -> datafthn = rh;
FIRSTfthn = R;
return(1);
} 

void LListfthn :: CETAKFT1(){
NodeFT *C;
C=FIRSTfthn;
while(C != NULL){
cout << "Nilai: " << C -> datafthn << endl;
C = C -> LINKFT;
} }

void LListfthn :: CETAKFT2(){
NodeFT *C;
C=FIRSTfthn;
while(C != NULL){
cout << C -> datafthn << " " ;
C = C -> LINKFT;
} 

}