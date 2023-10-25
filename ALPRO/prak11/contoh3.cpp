#include <iostream>
using namespace std;

int q_fathan[20], top_fathan = -1, front_fathan = -1, rear_fathan = -1, a_fathan[20][20], vis_fathan[20], stack_fathan[20];

int del_fathan();
void add_fathan(int item_fathan);
void bfs_fathan(int s, int n);
void dfs_fathan(int s, int n);
void push_fathan(int item_FTHN);
int pop_fathan();

int main() {
    int n_FT, i_FT, s_FT, ch_FT, j_FT;
    cout << "Masukkan jumlah simpul: ";
    cin >> n_FT;

    for (i_FT = 1; i_FT <= n_FT; i_FT++) {
        for (j_FT = 1; j_FT <= n_FT; j_FT++) {
            cout << "Masukkan " << i_FT << " data jika mempunyai simpul " << j_FT << " selain itu: ";
            cin >> a_fathan[i_FT][j_FT];
        }
    }

    cout << endl;
    cout << "Matriks Adjacency" << endl;
    for (i_FT = 1; i_FT <= n_FT; i_FT++) {
        for (j_FT = 1; j_FT <= n_FT; j_FT++) {
            cout << a_fathan[i_FT][j_FT] << "  ";
        }
        cout << endl;
    }

    for (i_FT = 1; i_FT <= n_FT; i_FT++) {
        vis_fathan[i_FT] = 0;
    }

    cout << endl;
    cout << "      MENU     " << endl;
    cout << "~~~~~~~~~~~~~~~" << endl;
    cout << "1. BFS - Breadth First Search" << endl;
    cout << "2. DFS - Depth First Search" << endl;
    cout << "3. Keluar" << endl;

    cout << "Pilihan: ";
    cin >> ch_FT;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Masukkan Simpul Sumber: ";
    cin >> s_FT;

    switch (ch_FT) {
        case 1:
            bfs_fathan(s_FT, n_FT);
            break;
        case 2:
            dfs_fathan(s_FT, n_FT);
            break;
        case 3:
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}

void bfs_fathan(int s, int n) {
    int p_FT, i_FT;
    add_fathan(s);
    vis_fathan[s] = 1;
    p_FT = del_fathan();

    if (p_FT != 0) {
        cout << p_FT << "  ";

        while (p_FT != 0) {
            for (i_FT = 1; i_FT <= n; i_FT++) {
                if ((a_fathan[p_FT][i_FT] != 0) && (vis_fathan[i_FT] == 0)) {
                    add_fathan(i_FT);
                    vis_fathan[i_FT] = 1;
                }
            }

            p_FT = del_fathan();

            if (p_FT != 0) {
                cout << p_FT << "  ";
            }
        }
    }

    for (i_FT = 1; i_FT <= n; i_FT++) {
        if (vis_fathan[i_FT] == 0) {
            bfs_fathan(i_FT, n);
        }
    }
}

void add_fathan(int item_FTHN) {
    if (rear_fathan == 19) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (rear_fathan == -1) {
            q_fathan[++rear_fathan] = item_FTHN;
            front_fathan++;
        } else {
            q_fathan[++rear_fathan] = item_FTHN;
        }
    }
}

int del_fathan() {
    int k;

    if ((front_fathan > rear_fathan) || (front_fathan == -1)) {
        return 0;
    } else {
        k = q_fathan[front_fathan++];
        return k;
    }
}

void dfs_fathan(int s, int n) {
    int i, k;
    push_fathan(s);
    vis_fathan[s] = 1;
    k = pop_fathan();

    if (k != 0) {
        cout << k << "  ";

        while (k != 0) {
            for (i = 1; i <= n; i++) {
                if ((a_fathan[k][i] != 0) && (vis_fathan[i] == 0)) {
                    push_fathan(i);
                    vis_fathan[i] = 1;
                }
            }

            k = pop_fathan();

            if (k != 0) {
                cout << k << "  ";
            }
        }
    }

    for (i = 1; i <= n; i++) {
        if (vis_fathan[i] == 0) {
            dfs_fathan(i, n);
        }
    }
}

void push_fathan(int item_FTHN) {
    if (top_fathan == 19) {
        cout << "Stack Overflow" << endl;
    } else {
        stack_fathan[++top_fathan] = item_FTHN;
    }
}

int pop_fathan() {
    int k;

    if (top_fathan == -1) {
        return 0;
    } else {
        k = stack_fathan[top_fathan--];
        return k;
    }
}
