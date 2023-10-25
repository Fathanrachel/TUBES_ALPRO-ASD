#include <string.h>
#include <iostream>
using namespace std;


class deretfathan{
public:
int dataFTHN[10], data2FTHN[10];
int a;
};
deretfathan FTHN;


void tukarfthn(int A, int B)
{
	int R;
	R = FTHN.dataFTHN[B];
	FTHN.dataFTHN[B] = FTHN.dataFTHN[A];
	FTHN.dataFTHN[A] = R;
}

void inputFTHN()
{
	cout << "Masukkan jumlah data = ";
	cin  >> FTHN.a;
	cout << "============================" << endl;
	for (int H = 0; H < FTHN.a; H++)
	{
		cout << "Masukkan data ke- " << (H + 1) << " = ";
		cin  >> FTHN.dataFTHN[H];
		FTHN.data2FTHN[H] = FTHN.dataFTHN[H];
	}
	cout << endl;
}

void tampilfathan()
{
	for (int H = 0; H < FTHN.a; H++)
	{
		cout << FTHN.dataFTHN[H] << " ";
	}
	cout << endl;
}

void bubble_sortfathan()
{
	int k, i, T, flag;
	k = 0;
	flag = 1;
	while (k <= FTHN.a - 2 && flag == 1)
	{
		i = 0;
		flag = 0;
		while (i <= n-2 - k)
		{
			if (A[i] < A[i + 1])
			{
				flag = 1;
				T = A[i];
				A[i] = A[i + 1];
				A[i] = T;  
			}
			
		}
		
	}
	
}

int main(){

	cout << "=============================" << endl;
	cout << "* Selamat datang di aplikasi *" << endl;
	cout << "* Bubble Sort Ascending *" << endl;
	cout << "============================" << endl;
	inputFTHN();
	cout << "Prose Bubble Sort........*" << endl;
	cout << "=============================" << endl;
	tampilfathan();
	bubble_sortfathan();
	cout << "=============================" << endl;
	cout << " TERIMA KASIH" << endl;
	cout << "=============================" << endl;
	cin.get();
}