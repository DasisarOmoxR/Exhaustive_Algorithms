#include <vector>
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

/* Ordena el vector V intercambiando los valores consecutivos si no estan ordenados
    · Recorre N veces todo el vector buscando elementos mayores y los intercambia, Complejidad: O(n²)
    8 3 1 7 2
    3 8 1 7 2
    3 1 8 7 2
    3 1 7 8 2
    3 1 7 2 8
    1 3 7 2 8
    1 3 7 2 8
    1 3 2 7 8
    1 3 2 7 8
    1 2 3 7 8
    1 2 3 7 8
    1 2 3 7 8
*/

void bubbleSort(vector<int> &V) {
    for (int i = 0; i < V.size() - 1; i++) {
        for (int j = 0; j < V.size() - 1 - i; j++) {
            if (V[j] > V[j + 1]) {
                swap(V[j], V[j + 1]);
            }
            for (int k = 0; k < V.size(); k++) cout << V[k] << " ";
            cout << endl;
        }
    }
}

int main() {

    int n;

    cout << "=======================" << endl;
    cout << "Tamaño del vector: " << endl;
    cin >> n;
    cout << "=======================" << endl;

    vector <int> A(n);
    cout << "Insertar elementos del vector con un espacio entre cada uno: " << endl;
    for (int i = 0; i < A.size(); i++) cin >> A[i];
    cout << "=======================" << endl;

    bubbleSort(A);
    cout << "=======================" << endl;
}
