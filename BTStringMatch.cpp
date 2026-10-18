#include <string.h>
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

// Busca el patron P dentro de la cadena S
int BTStringMatch(string &S, string &P) {
    for (int i = 0; i < S.size() - P.size() + 1; i++) {
        int j = 0;
        while(j < P.size() && P[j] == S[i + j]) {
            j = j + 1;
            if (j == P.size()) return i;
        }
    }
    return -1;
}

int main() {

    string S;
    string P;

    cout << "=======================" << endl;
    cout << "Cadena Principal: " << endl;
    cin >> S;
    cout << "=======================" << endl;
    cout << "Patrón a encontrar en la cadena principal: " <<  endl;
    cin >> P;
    cout << "=======================" << endl;

    cout << "Índice del punto en el que empieza el patron: " <<  BTStringMatch(S,P) << endl;
    cout << "Si ha salido -1 es que no se ha encontrado ningún patrón!" << endl;
    cout << "=======================" << endl;
}
