#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct data_pendudukfathan{
		string NIKfathan[20], namafathan[50], alamatfathan[50], kelaminfathan[2], agamafathan[10], statuskawinfathan[25], pekerjaanfathan[20], kewarganegaraanfathan[20];
		int MBKTPfathan[5], tahunlahirfathan[4];
	};
	data_pendudukfathan identitas;
int main(){
	int jumlah,a;
	cout << endl;
	cout << "====================> INPUT DATA PENDUDUK <====================\n\n";
	cout << "Jumlah DATA PENDUDUK : ";
	cin  >> jumlah;
	cout << endl;
	
	for (a = 1; a <= jumlah; a++){
		cout << endl;
		cout << "=> Data Penduduk Ke- " << a << endl;
		cout << "NIK                        : ";
		cin  >> identitas.NIKfathan[a];
		cout << "Nama Penduduk              : ";
		cin >> identitas.namafathan[a];
		cout << "Alamat Penduduk            : ";
        cin >> identitas.alamatfathan[a];
		cout << "Tahun Lahir                : ";
		cin  >> identitas.tahunlahirfathan[a];
		cout << "Jenis Kelamin [L/P]        : ";
		cin  >> identitas.kelaminfathan[a];
		cout << "Agama                      : ";
		cin  >> identitas.agamafathan[a];
		cout << "Status Kawin               : ";
		cin >> identitas.statuskawinfathan[a];
		cout << "Pekerjaan                  : ";
		cin  >> identitas.pekerjaanfathan[a];
		cout << "Kewarganegaraan            : ";
		cin  >> identitas.kewarganegaraanfathan[a];
		cout << "Masa Berlaku KTP           : ";
		cin  >> identitas.MBKTPfathan[a];
		cout << endl;
	}
  
  cout << endl << endl;
  cout << "|===========================================|" << endl;
  cout << "|                DATA PENDUDUK              |" << endl;
  cout << "|===========================================|" << endl;
  cout << endl;

  for (a=1; a < jumlah+1; a++){
    cout << "=> Data Penduduk Ke- " << a << endl;
    cout << "NIK                        : " << identitas.NIKfathan[a] << endl;
    cout << "Nama Penduduk              : " << identitas.namafathan[a] << endl;
    cout << "Alamat Penduduk            : " << identitas.alamatfathan[a] << endl;
    cout << "Tahun Lahir                : " << identitas.tahunlahirfathan[a] << endl;
    cout << "Jenis Kelamin [L/P]        : " << identitas.kelaminfathan[a] << endl;
    cout << "Agama                      : " << identitas.agamafathan[a] << endl;
    cout << "Status Kawin               : " << identitas.statuskawinfathan[a] << endl;
    cout << "Pekerjaan                  : " << identitas.pekerjaanfathan[a] << endl;
    cout << "Kewarganegaraan            : " << identitas.kewarganegaraanfathan[a] << endl;
    cout << "Masa Berlaku KTP           : " << identitas.MBKTPfathan[a] << endl;
    cout << endl;
  }
	cout << "=========================================================================" << endl;
	cout << endl;
	
	cin.get();
}