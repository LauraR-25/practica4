#include <iostream>
using namespace std;

int sumarNumeros(int a, int b);
int obtenerContadorLlamadas();

int contadorLlamadas = 0;
int sumarNumeros(int a, int b){
    return (++contadorLlamadas, a + b);
}

int obtenerContadorLlamadas(){
    return contadorLlamadas;
}

int main() {
    int resultados[] = { sumarNumeros(3, 4), sumarNumeros(5, 6), sumarNumeros(7, 8) };
    cout << "sumarNumeros fue llamada " << obtenerContadorLlamadas() << " veces." << endl;
    cout << "Resultados: " << resultados[0] << ", " << resultados[1] << ", " << resultados[2] << endl;

    return 0;
}