#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

double BFClosestPair(vector<pair<double, double>> &P){
    double d = INFINITY;
    for (int i = 0; i < P.size() - 1; i++) {
        for (int j = i + 1; j < P.size(); j++) {
            double distancia = sqrt(
                pow(P[i].first - P[j].first, 2) +
                pow(P[i].second - P[j].second, 2)
            );
            d = min(d, distancia);
        }
    }
    return d;
}

int main() {

    int n;
    cout << "=======================" << endl;
    cout << "Número de puntos: " << endl;
    cin >> n;

    vector<pair<double, double>> P(n);

    for (int i = 0; i < P.size(); i++) {
        cout << "=======================" << endl;
        cout << "Insertar elementos del punto " << i << " en formato X Y" << endl;
        cin >> P[i].first >> P[i].second;
    }
    cout << "=======================" << endl;
    cout << "Distancia mínima entre 2 puntos: " << BFClosestPair(P) << endl;
    cout << "=======================" << endl;
}
