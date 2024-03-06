#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//A01620778 Rogelio Zaid Sariñana Hernández

int maximoDanio(int n, int k, vector<int>& danio, string& secuencia) {
    int max_danio = 0;
    unordered_map<char, int> frecuencia;
    int izquierda = 0, derecha = 0;

    while (derecha < n) {
        frecuencia[secuencia[derecha]]++;

        // Ajustar el puntero izquierdo si se viola la condición (no más de k veces seguidas)
        while (frecuencia[secuencia[derecha]] > k) {
            frecuencia[secuencia[izquierda]]--;
            izquierda++;
        }

        // Calcular el daño actual
        int danio_actual = 0;
        for (auto& it : frecuencia) {
            danio_actual += it.second * danio[it.first - 'a'];
        }

        // Actualizar el máximo daño si es necesario
        max_danio = max(max_danio, danio_actual);
        derecha++;
    }

    return max_danio;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> danio(26);
    for (int i = 0; i < 26; i++) {
        cin >> danio[i];
    }

    string secuencia;
    cin >> secuencia;

    cout << maximoDanio(n, k, danio, secuencia) << endl;

    return 0;
}
