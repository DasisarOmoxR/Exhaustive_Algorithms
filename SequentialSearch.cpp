#include <vector>
#include <iostream>

using namespace std;

// ¿Esto necesita explicación?
int sequentialSearch(vector<int> &V, int k) {
    for (int i = 0; i < V.size(); i++) {
        if (V[i] == k) return i;
    }
    return -1;
}

int main() {

    int n;
    int k;

    cout << "=======================" << endl;
    cout << "Poner tamaño del vector y elemento a encontrar en formato: N k" << endl;
    cin >> n >> k;
    cout << "=======================" << endl;
    cout << "Insertar elementos del vector con un espacio entre cada uno: " << endl;
    vector <int> A(n);
    for (int i = 0; i < A.size(); i++) cin >> A[i];
    cout << "=======================" << endl;

    cout << "Índice del dato del vector donde está k: " <<  sequentialSearch(A, k) << endl;
    cout << "Si ha salido -1 es que el elemento no se ha encontrado!" << endl;
    cout << "=======================" << endl;
}
