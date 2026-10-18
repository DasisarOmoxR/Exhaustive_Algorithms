#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void Permute(vector<int> &A, int k, int n) {

    // Caso base, el índice de permutaciones ha llegado al número de elementos en el vector
    if (k == n) {
        cout << "{ ";
        for (int x : A) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    for (int i = k; i < n; i++) {
        swap (A[k], A[i]);
        Permute(A, k + 1, n);
        swap(A[k], A[i]);
    }
}

int main() {

    int n;
    int k = 0;

    cout << "=======================" << endl;
    cout << "Tamaño del vector: " << endl;
    cin >> n;
    cout << "=======================" << endl;

    vector <int> A(n);
    cout << "Insertar elementos del vector con un espacio entre cada uno: " << endl;
    for (int i = 0; i < A.size(); i++) cin >> A[i];
    cout << "=======================" << endl;
    Permute(A, k, A.size());
    cout << "=======================" << endl;

    return 0;
}
