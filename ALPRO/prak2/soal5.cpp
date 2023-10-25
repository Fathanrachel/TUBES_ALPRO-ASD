#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MATAKULIAH_ASDfthn {
    string namafthn[30], NIMfthn[10];
    double quizfthn[3], UTSfthn[3], UASfthn[3];
    string indeksfthn[5];
    float nilai_akhirfthn[100];
};

int main(){
    int f, jumlahft;
    MATAKULIAH_ASDfthn data_nilai;
    
    cout << "DATA NILAI MAHASISWA TEKNIK INFORMATIKA\n";
    cout << "     ALGORITMA DAN STRUKTUR DATA\n";
    cout << "========================================\n";
    cout << "Masukkan jumlah mahasiswa yang ingin di input : ";
    cin  >> jumlahft;
    cout << endl;
    for (f = 1; f <= jumlahft; f++){
        MATAKULIAH_ASDfthn *fthn = &data_nilai;
		cout << endl;
		cout << "=> Mahasiswa " << f << endl;
        cout << endl;
        cout << "NIM            : ";
        cin >> fthn -> NIMfthn[f];
        cout << "Nama Mahasiswa : ";
        cin >> fthn -> namafthn[f];
        cout << "Nilai Quiz     : ";
        cin >> fthn -> quizfthn[f];
        cout << "Nilai UTS      : ";
        cin >> fthn -> UTSfthn[f];
        cout << "Nilai UAS      : ";
        cin >> fthn -> UASfthn[f];
        fthn -> nilai_akhirfthn[f] = (data_nilai.quizfthn[f] + data_nilai.UTSfthn[f] + data_nilai.UASfthn[f] ) / 3;
        if (data_nilai.nilai_akhirfthn[f] <= 44.99)
        {
            data_nilai.indeksfthn[f] = "E"; 
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 55.99)
        {
            data_nilai.indeksfthn[f] = "D"; 
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 59.99)
        {
            data_nilai.indeksfthn[f] = "C";
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 63.99)
        {
            data_nilai.indeksfthn[f] = "C+";
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 67.99)
        {
            data_nilai.indeksfthn[f] = "B-";
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 71.99)
        {
            data_nilai.indeksfthn[f] = "B";
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 75.99)
        {
            data_nilai.indeksfthn[f] = "B+";
        }
        else if (data_nilai.nilai_akhirfthn[f] <= 79.99)
        {
            data_nilai.indeksfthn[f] = "A-";
        }
        else if (data_nilai.nilai_akhirfthn[f] >= 80)
        {
            data_nilai.indeksfthn[f] = "A";
        }
        else
        {
            cout << "TIDAK ADA";
        }

    }
    cout << endl;
    cout << endl;
    cout << "Data yang telah dimasukkan adalah :\n";
    cout << "=================================================================================================================================\n";
    cout << "|          NIM            |           NAMA            |    QUIZ    |    UTS    |    UAS    |        NILAI AKHIR      |  INDEKS  |\n";
    cout << "=================================================================================================================================\n";
    for (f = 1; f < jumlahft + 1; f++){
    cout << "| " << setw(15) << data_nilai.NIMfthn[f] << setw(10) << "       |" << setw(15) << data_nilai.namafthn[f] << setw(11) <<  "            |" << setw(8) << data_nilai.quizfthn[f] << setw(5) << "  |" << setw(7) << data_nilai.UTSfthn[f] << setw(5) << "|" << setw(7) << data_nilai.UASfthn[f] << setw(5) << "|" << setw(15) << data_nilai.nilai_akhirfthn[f]  << setw(11) << " |" << setw(6) << data_nilai.indeksfthn[f]  << setw(5) << "    | " << endl; 
    }
    cout << "=================================================================================================================================\n";


    cin.get();
    return 0;
}