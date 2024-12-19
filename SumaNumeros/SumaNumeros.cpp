#include <iostream>
using namespace std;
// Función recursiva para calcular la suma de los primeros n números naturales
int sumaRecursiva(int n) {
if (n == 0) {
return 0; // Caso base: si n es 0, la suma es 0
} else {
return n + sumaRecursiva(n - 1); // Llamada recursiva para sumar n y los números anteriores
}
}
int main() {
int n;
cout << "Ingrese un numero entero positivo para calcular la suma de los primeros en numeros naturales: ";
cin >> n;
// Validar si n es un número entero positivo
if (n < 0) {
    cout << "El numero ingresado no es valido. Debe ser un número entero positivo." << endl;
return 1; // Salir del programa con un código de error
}
// Llamar a la función recursiva para calcular la suma de los primeros n números naturales
int resultado = sumaRecursiva(n);
// Imprimir el resultado
cout << "La suma de los primeros " << n << " numeros naturales es: " << resultado << endl;
return 0;
}

