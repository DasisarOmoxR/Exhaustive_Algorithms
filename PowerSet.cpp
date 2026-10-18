#include <iostream>
#include <vector>

using namespace std;

void PowerSet(vector<int> &S, vector<int> &s, int n) {

    // Caso base, hemos agotado todos los elementos del vector
    if (n == 0) {
        cout << "{ ";
        for (int x : s) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // Añadimos un elemento de S a s
    s.push_back(S[n - 1]);

    // Llamada recursiva
    PowerSet(S, s, n - 1);

    // Nos cargamos un elemento de s
    s.pop_back();

    // Llamada recursiva
    PowerSet(S, s, n - 1);
}

int main() {

    int n;
    vector<int> actual;

    cout << "=======================" << endl;
    cout << "Tamaño del vector: " << endl;
    cin >> n;
    cout << "=======================" << endl;

    vector <int> A(n);
    cout << "Insertar elementos del vector con un espacio entre cada uno: " << endl;
    for (int i = 0; i < A.size(); i++) cin >> A[i];
    cout << "=======================" << endl;
    PowerSet(A, actual, A.size());
    cout << "=======================" << endl;

    return 0;
}
