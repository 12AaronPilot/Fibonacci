#include <iostream>
#include <map>

using namespace std;

// Función que calcula el número de Fibonacci
unsigned long long int fib(unsigned int a, map<unsigned int, unsigned long long int>& b) {
    //Si 'a' es 1 o 2, el resultado es 1
    if (a <= 2) {
        return 1;
    }

    // Si el valor ya está calculado en el mapa, lo devolvemos
    if (b[a] != 0) {
        return b[a];
    }

    // Si el valor no ha sido calculado, lo calculamos recursivamente
    b[a] = fib(a - 1, b) + fib(a - 2, b);

    // Devolvemos el valor calculado
    return b[a];
}

int main() {
    unsigned int n = 100; // Calcula Fibonacci hasta 100
    map<unsigned int, unsigned long long int> b; // Mapa para memoización

    // Llamada a la función Fibonacci e impresión de cada resultado
    for (unsigned int i = 1; i <= n; ++i) {
        unsigned long long int result = fib(i, b); // Calculamos Fibonacci(i)
        cout << "Fibonacci(" << i << ") = " << result << endl; // Imprimimos el resultado
    }

    return 0;
}