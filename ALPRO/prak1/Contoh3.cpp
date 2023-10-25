#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct pelanggan_tokofathan{
		string namafathan[20], alamatfathan [20], kelaminfathan[2], telpfathan[20];
		int umurfathan[3];
	};
	pelanggan_tokofathan Data;
int main(){
	int Jumlah,a;
	cout << endl;
	cout << "INPUT DATA PELANGGAN\n";
	cout << "Jumlah Pelanggan : ";
	cin  >> Jumlah;
	cout << endl;
	
	for (a = 1; a <= Jumlah; a++){
		cout << endl;
		cout << "Nama Pelanggan Toko : ";
		cin  >> Data.namafathan[a];
		cout << "Alamat Pelanggan Toko : ";
		cin  >> Data.alamatfathan[a];
		cout << "Umur Pelanggan Toko : ";
		cin  >> Data.umurfathan[a];
		cout << "Jenis Kelamin Pelanggan [L/P] : ";
		cin  >> Data.kelaminfathan[a];
		cout << "No Telp Pelanggan : ";
		cin  >> Data.telpfathan[a];
		cout << endl;
	}
	cout << endl;
	cout << "=========================================================================" << endl;
	cout << "			    				Data Pelanggan Toko               " << endl;
	cout << "=========================================================================" << endl;
	cout << "| Nama		| Alamat	| Umur	| Kelamin	| No Telp	     |" << endl;
	cout << "=========================================================================" << endl;
	for (a = 1; a < Jumlah+1; a++){
		cout << setw(5) << Data.namafathan[a] << setw(20) << Data.alamatfathan[a] << setw(10) << Data.umurfathan[a];
		cout << setw(10) << Data.kelaminfathan[a] << setw(15) << Data.telpfathan[a] << setw(15);
		cout << endl;
	}
	cout << "=========================================================================" << endl;
	cout << endl;
	
	cin.get();
}