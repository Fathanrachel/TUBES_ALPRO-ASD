/*
Nama: Muhammad Rachel Fathan Idzhany
NPM : 4522210071
Matkul: Algoritma dan Struktur Data A
*/

// program pengurutan Quick Sort

#include <iostream>
#include <iomanip>
using namespace std;

void fathanq_sort(int[], int, int);
int main() {
    int NumlistFTHN[9] = {65, 2, 44, 26, 19, 22, 5, 3, 12};
    cout << "Data Sebelum Diurutkan:\n";
    for (int F = 0; F < 9; F++) {
        cout << setw(3) << NumlistFTHN[F];
    }
    cout << endl << endl;
    fathanq_sort(NumlistFTHN, 0, 8);
    cout << "Data Setelah Diurutkan:\n";
    for (int FFF = 0; FFF < 9; FFF++) {
        cout << setw(3) << NumlistFTHN[FFF];
    }
    cin.get();
}

void fathanq_sort(int numbersFH[], int leftFH, int rightFH) {
    int pivotFT, l_holdFT, r_holdFT;
    l_holdFT = leftFH;
    r_holdFT = rightFH;
    pivotFT = numbersFH[leftFH];
  
    while (leftFH < rightFH) {
        while ((numbersFH[rightFH] >= pivotFT) && (leftFH < rightFH))
            rightFH--;
        if (leftFH != rightFH) {
            numbersFH[leftFH] = numbersFH[rightFH];
            leftFH++;
        }
        while ((numbersFH[leftFH] <= pivotFT) && (leftFH < rightFH))
            leftFH++;
        if (leftFH != rightFH) {
            numbersFH[rightFH] = numbersFH[leftFH];
            rightFH--;
        }
    }
    numbersFH[leftFH] = pivotFT;
    pivotFT = leftFH;
    leftFH = l_holdFT;
    rightFH = r_holdFT;
    if (leftFH < pivotFT)
        fathanq_sort(numbersFH, leftFH, pivotFT - 1);
    if (rightFH > pivotFT)
        fathanq_sort(numbersFH, pivotFT + 1, rightFH);
}
