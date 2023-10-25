#include <iostream>
#include <stdlib.h>
using namespace std;

int cost_fathan[10][10], i_fathan, j_fathan, k_fathan, n_fathan, stk_fathan[10], top_fathan, v_fathan, Visit_fathan[10], Visited_fathan[10];

int main() {
    int m_fathan;
    cout << "Masukkan Vertex  = "; cin >> n_fathan;
    cout << "Masukkan Busur   = "; cin >> m_fathan;
    cout << "BUSUR" << endl;
    for (k_fathan = 1; k_fathan <= m_fathan; k_fathan++) {
        cin >> i_fathan >> j_fathan;
        cost_fathan[i_fathan][j_fathan] = 1;
    }
    cout << "Inisialisasi Vertex  = ";
    cin >> v_fathan;
    cout << "DFS order Vertex     = ";
    cout << v_fathan << " ";
    Visited_fathan[v_fathan] = 1;
    k_fathan = 1;
    while (k_fathan < n_fathan) {
        for (j_fathan = n_fathan; j_fathan >= 1; j_fathan--) {
            if (cost_fathan[v_fathan][j_fathan] != 0 && Visited_fathan[j_fathan] != 1 && Visit_fathan[j_fathan] != 1) {
                Visit_fathan[j_fathan] = 1;
                stk_fathan[top_fathan] = j_fathan;
                top_fathan++;
            }
        }
        v_fathan = stk_fathan[--top_fathan];
        cout << v_fathan << " ";
        k_fathan++;
        Visit_fathan[v_fathan] = 0;
        Visited_fathan[v_fathan] = 1;
    }

    cin.get();
    return 0;
}