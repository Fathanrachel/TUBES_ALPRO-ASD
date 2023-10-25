#include <iostream>
using namespace std;

class deretfathan {
private:
    int *fthn;
    int deret;
public:
    deretfathan(int F) {
        deret = F;
        fthn = new int[deret];
    }

    void inputFTHN() {
        cout << "Masukkan " << deret << " angka:\n";
        for (int H = 0; H < deret; H++) {
            cout << "Masukkan data ke- " << (H + 1) << " = ";
            cin >> fthn[H];
          
        }
    }

    void Shell_sortfathan() {
        int TTP, L, A, ASD;
        for (TTP = deret / 2; TTP > 0; TTP /= 2) {
            for (L = TTP; L < deret; L++) {
                ASD = fthn[L];
                for (A = L; A >= TTP && fthn[A - TTP] > ASD; A -= TTP) {
                    fthn[A] = fthn[A - TTP];
                }
                fthn[A] = ASD;
            }
        }
    }

    void tampilfathan() {
        cout << "Hasil pengurutan:\n";
        for (int C = 0; C < deret; C++) {
            cout << fthn[C] << " ";
        }
        cout << endl;
    }
};

int main() {
    int deret;
    cout << "=============================" << endl;
	  cout << "* Selamat datang di aplikasi *" << endl;
	  cout << "* Shell Sort Ascending *" << endl;
	  cout << "============================" << endl;
    cout << "Masukkan Jumlah Data: ";
    cin >> deret; 
    cout << endl;

    deretfathan F(deret);
    cout << "=============================" << endl;
    F.inputFTHN();
    F.Shell_sortfathan();
    cout << "=============================" << endl;
    F.tampilfathan();

    return 0;
}
