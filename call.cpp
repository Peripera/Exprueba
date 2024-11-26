#include <iostream>

using namespace std;

int main() {
    std::cout << "¡Hola, todos!" << std::endl;
    std::cout<<"dd"<<std::endl;
       int num1, num2, suma;

    // Pedir números al usuario
    cout << "Ingresa el primer número: ";
    cin >> num1; // Leer el primer número

    cout << "Ingresa el segundo número: ";
    cin >> num2; // Leer el segundo número

    // Calcular la suma
    suma = num1 + num2;

    // Mostrar el resultado
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

    return 0; // Fin del programa
}
