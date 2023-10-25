#include <string.h>
#include <iostream>
using namespace std;

int dataFTHN[10], data2FTHN[10];
int a;
void tukarfthn(int A, int B)
{
	int R;
	R = dataFTHN[B];
	dataFTHN[B] = dataFTHN[A];
	dataFTHN[A] = R;
}

void inputFTHN()
{
	cout << "Masukkan jumlah data = ";
	cin  >> a;
	cout << "============================" << endl;
	for (int H = 0; H < a; H++)
	{
		cout << "Masukkan data ke- " << (H + 1) << " = ";
		cin  >> dataFTHN[H];
		data2FTHN[H] = dataFTHN[H];
	}
	cout << endl;
}

void tampilfathan()
{
	for (int H = 0; H < a; H++)
	{
		cout << dataFTHN[H] << " ";
	}
	cout << endl;
}

void bubble_sortfathan()
{
	for (int H = 1; H < a; H++)
	{
		for (int C = a-1; C >= H; C--)
		{
			if (dataFTHN[C] < dataFTHN[C-1]) tukarfthn(C,C-1);
		}
		  tampilfathan();
	}
	cout << endl;
}

int main(){
	cout << "=============================" << endl;
	cout << "* Selamat datang di aplikasi *" << endl;
	cout << "* Bubble Sort *" << endl;
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