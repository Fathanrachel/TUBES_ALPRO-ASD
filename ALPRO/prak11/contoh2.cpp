#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int a_FTHN[20][20], q_FTHN[20], Visited_FTHN[20], n_FTHN, i_FTHN, j_FTHN, f_FTHN = 0, r_FTHN = -1;

void bfs(int v_FTHN) {
    Visited_FTHN[v_FTHN] = 1;
    q_FTHN[++r_FTHN] = v_FTHN;

    while (f_FTHN <= r_FTHN) {
        v_FTHN = q_FTHN[f_FTHN++];
        cout << v_FTHN << " ";

        for (i_FTHN = 1; i_FTHN <= n_FTHN; i_FTHN++) {
            if (a_FTHN[v_FTHN][i_FTHN] && !Visited_FTHN[i_FTHN]) {
                q_FTHN[++r_FTHN] = i_FTHN;
                Visited_FTHN[i_FTHN] = 1;
            }
        }
    }
}

int main() {
    int v_fathan;
    cout << "Masukkan Matriks atau Vertex = ";
    cin >> n_FTHN;

    for (i_FTHN = 1; i_FTHN <= n_FTHN; i_FTHN++) {
        q_FTHN[i_FTHN] = 0;
        Visited_FTHN[i_FTHN] = 0;
    }

    cout << "Masukkan Data Graph dalam bentuk Matrik [nxn]:" << endl;
    for (i_FTHN = 1; i_FTHN <= n_FTHN; i_FTHN++) {
        for (j_FTHN = 1; j_FTHN <= n_FTHN; j_FTHN++) {
            cin >> a_FTHN[i_FTHN][j_FTHN];
        }
    }

    cout << "Masukkan Vertex awal = ";
    cin >> v_fathan;

    bfs(v_fathan);

    cout << "\nNode yang dapat dicapai = ";
    for (i_FTHN = 1; i_FTHN <= n_FTHN; i_FTHN++) {
        if (Visited_FTHN[i_FTHN]) {
            cout << i_FTHN << "     ";
        } else {
            cout << "BFS - Tidak semua Node dapat dijangkau";
            break;
        }
    }
    cout << endl;

    cin.get();
    return 0;
}
