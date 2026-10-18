#include <vector>
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

/* Ordena el vector V buscando el mínimo de cada recorrido y llevándolo a la posición correcta
    · Recorre N veces todo el vector buscando el mínimo y cambia el valor de índice i por el mínimo, Complejidad: O(n²)
    [8, 3, 1, 7, 2]
    [1, 3, 8, 7, 2]
    [1, 2, 8, 7, 3]
    [1, 2, 3, 7, 8]
    [1, 2, 3, 7, 8]
*/

void selectionSort(vector<int> &V) {
    for (int i = 0; i < V.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < V.size(); j++) {
            if (V[j] < V[min]) min = j;
        }
        swap(V[i], V[min]);
        for (int k = 0; k < V.size(); k++) cout << V[k] << " ";
        cout << endl;
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

    selectionSort(A);

    cout << "=======================" << endl;

}
