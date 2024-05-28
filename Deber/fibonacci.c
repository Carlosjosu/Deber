#include <stdio.h>

int main() {
    int n1; 
    int fib1 = 0;
    int fib2 = 1;
    int siguiente;

    printf( "Ingrese el la cantidad de de elementos a imprimir en la serie \n");
    scanf ( "%d",&n1);

    printf("Los primeros %d elementos de la serie de Fibonacci son:\n", n1);
    printf("%d, %d", fib1, fib2);

    for (int i = 3; i <= n1; i++) {
        siguiente = fib1 + fib2;
        printf(", %d", siguiente);
        fib1 = fib2;
        fib2 = siguiente;
    }

    printf("\n");

    return 0;
}
