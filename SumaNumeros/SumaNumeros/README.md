# Suma de los Primeros N Números Naturales en C++

Este proyecto es un programa en C++ que permite calcular la suma de los primeros \( n \) números naturales utilizando una función recursiva.

## ¿Qué son los números naturales y su suma?

Los números naturales son los números enteros positivos comenzando desde 1 (algunos incluyen el 0 como número natural). La suma de los primeros \( n \) números naturales se define como:

\[
\text{suma}(n) = 1 + 2 + 3 + \dots + n
\]

Por ejemplo:
- Si \( n = 5 \), entonces \( \text{suma}(5) = 1 + 2 + 3 + 4 + 5 = 15 \).

## Propósito del código

El programa calcula la suma de los primeros \( n \) números naturales que un usuario ingresa, validando previamente que el número sea un entero positivo.

## ¿Qué incluye el código?

1. **Función Recursiva para la Suma**
   - La función `sumaRecursiva(int n)` utiliza recursión para calcular la suma de los primeros \( n \) números naturales.
     ```cpp
     int sumaRecursiva(int n) {
         if (n == 0) {
             return 0; // Caso base: si n es 0, la suma es 0
         } else {
             return n + sumaRecursiva(n - 1); // Suma actual más
