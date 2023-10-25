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
	for (int H = 1; H < FTHN.a; H++)
	{
		for (int C = FTHN.a-1; C >= H; C--)
		{
			if (FTHN.dataFTHN[C] < FTHN.dataFTHN[C-1]) tukarfthn(C,C-1);
		}
		  tampilfathan();
	}
	cout << endl;
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