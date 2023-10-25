#include <iostream>
using namespace std;

struct CanBTree_fathan {
    int *d_fathan;
    CanBTree_fathan **CanAnakPointer_FTHN;
    bool l_fathan;
    int n_fathan;
} *r_fathan = NULL, *np_fathan = NULL, *x_fathan = NULL, *npl_fathan = NULL, *np3_fathan = NULL, *y_fathan = NULL;

CanBTree_fathan* init_FTHN() {
    int i;
    np_fathan = new CanBTree_fathan;
    np_fathan->CanAnakPointer_FTHN = new CanBTree_fathan *[7];
    np_fathan->l_fathan = true;
    np_fathan->n_fathan = 0;
    for (i = 0; i < 7; i++) {
        np_fathan->CanAnakPointer_FTHN[i] = NULL;
    }
    return np_fathan;
}

void pohonB_fathan(CanBTree_fathan *P_fathan) {
    cout << endl;
    int i;
    for (i = 0; i < P_fathan->n_fathan; i++) {
        if (P_fathan->l_fathan == false) {
            pohonB_fathan(P_fathan->CanAnakPointer_FTHN[i]);
        }
        cout << " " << P_fathan->d_fathan[i];
    }
    if (P_fathan->l_fathan == false) {
        pohonB_fathan(P_fathan->CanAnakPointer_FTHN[i]);
    }
}

void Urut_fathan(int *p_fathan, int n_FT) {
    int i_FT, j_FT, t_FT;
    for (i_FT = 0; i_FT < n_FT; i_FT++) {
        for (j_FT = i_FT; j_FT <= n_FT; j_FT++) {
            if (p_fathan[i_FT] > p_fathan[j_FT]) {
                t_FT = p_fathan[i_FT];
                p_fathan[i_FT] = p_fathan[j_FT];
                p_fathan[j_FT] = t_FT;
            }
        }
    }
}

int PecahAnak_fathan(CanBTree_fathan *x_fathan, int i) {
    int j_fathan, mid_fathan;
    CanBTree_fathan *y_fathan;
    np3_fathan = init_FTHN();
    np3_fathan->l_fathan = true;
    if (i == -1) {
        mid_fathan = x_fathan->d_fathan[2];
        x_fathan->d_fathan[2] = 0;
        x_fathan->n_fathan--;
    }
    return mid_fathan;
}

void Sisip_fathan(int a_FTHN) {
    int i, j, t, mid;
    x_fathan = r_fathan;
    if (x_fathan == NULL) {
        r_fathan = init_FTHN();
        x_fathan = r_fathan;
    } else {
        if (x_fathan->l_fathan == true && x_fathan->n_fathan == 6) {
            t = PecahAnak_fathan(x_fathan, -1);
            x_fathan = r_fathan;
            for (i = 0; i < (x_fathan->n_fathan); i++) {
                if ((a_FTHN > x_fathan->d_fathan[i]) && (a_FTHN < x_fathan->d_fathan[i + 1])) {
                    i++;
                    break;
                } else if (a_FTHN < x_fathan->d_fathan[0]) {
                    break;
                } else {
                    continue;
                }
            }
            x_fathan = x_fathan->CanAnakPointer_FTHN[i];
        } else {
            while (x_fathan->l_fathan == false) {
                for (i = 0; i < (x_fathan->n_fathan); i++) {
                    if ((a_FTHN > x_fathan->d_fathan[i]) && (a_FTHN < x_fathan->d_fathan[i + 1])) {
                        i++;
                        break;
                    } else if (a_FTHN < x_fathan->d_fathan[0]) {
                        npl_fathan = init_FTHN();
                        npl_fathan->l_fathan = false;
                        x_fathan->l_fathan = true;
                        for (j = 3; j < 6; j++) {
                            np3_fathan->d_fathan[j - 3] = x_fathan->d_fathan[j];
                            np3_fathan->CanAnakPointer_FTHN[j - 3] = x_fathan->CanAnakPointer_FTHN[j];
                            np3_fathan->n_fathan++;
                            x_fathan->d_fathan[j] = 0;
                            x_fathan->n_fathan--;
                        }
                        mid = x_fathan->d_fathan[2];
                        x_fathan->d_fathan[2] = 0;
                        x_fathan->n_fathan--;
                        for (j = 0; j < 6; j++) {
                            x_fathan->CanAnakPointer_FTHN[j] = NULL;
                        }
                        npl_fathan->d_fathan[0] = mid;
                        npl_fathan->CanAnakPointer_FTHN[npl_fathan->n_fathan] = x_fathan;
                        npl_fathan->CanAnakPointer_FTHN[npl_fathan->n_fathan + 1] = np3_fathan;
                        npl_fathan->n_fathan++;
                        r_fathan = npl_fathan;
                    } else {
                        y_fathan = x_fathan->CanAnakPointer_FTHN[i];
                        mid = y_fathan->d_fathan[2];
                        y_fathan->d_fathan[2] = 0;
                        y_fathan->n_fathan--;
                        x_fathan->CanAnakPointer_FTHN[i + 1] = y_fathan;
                        x_fathan->CanAnakPointer_FTHN[i + 1] = np3_fathan;
                        break;
                    }
                }
                if (i == x_fathan->n_fathan) {
                    x_fathan = x_fathan->CanAnakPointer_FTHN[i];
                }
                if ((x_fathan->CanAnakPointer_FTHN[i])->n_fathan == 6) {
                    t = PecahAnak_fathan(x_fathan, 1);
                    x_fathan->d_fathan[x_fathan->n_fathan] = t;
                    x_fathan->n_fathan++;
                    continue;
                } else {
                    x_fathan = x_fathan->CanAnakPointer_FTHN[i];
                }
            }
        }
    }
    x_fathan->d_fathan[x_fathan->n_fathan] = a_FTHN;
    Urut_fathan(x_fathan->d_fathan, x_fathan->n_fathan);
    x_fathan->n_fathan++;
}

int main() {
    int i, n_FTHN, t_FH;
    cout << "Masukkan Jumlah Elemen Yang Akan Diinput: ";
    cin >> n_FTHN;
    cout << endl;
    for (i = 0; i < n_FTHN; i++) {
        cout << "Masukkan Isi Elemen: ";
        cin >> t_FH;
        Sisip_fathan(t_FH);
    }
    cout << endl;
    cout << endl;
    cout << "HASIL PENGURUTAN MENGGUNAKAN BTREE" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    pohonB_fathan(r_fathan);
    cout << endl;

    return 0;
}
