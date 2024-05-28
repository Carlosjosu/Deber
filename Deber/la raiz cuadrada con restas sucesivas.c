
 /*Se deja constancia que no se especifica en el github si es raiz de 2 o de 3 
 pero haciendo los calculops era raiz de 3 asi que de eso se trata el programa*/ 
#include <stdio.h> // Se incluye la libreria

int main() {
    // Se definen variables
    int n1; 
    int aproximacion;
    // Se solicita que ingrese por teclado el numero que se desea sacar raiz la raiz
    printf( "Ingrese el numero que desea calcular la raiz \n");
    scanf( "%d",&n1);

    for (aproximacion = 1;aproximacion * aproximacion * aproximacion < n1; aproximacion++) {
        
    }
// Se imprime el numero de la raiz cubica y su respuesta
    printf("La raíz cúbica de %d es aproximadamente %d\n", n1, aproximacion - (aproximacion * aproximacion * aproximacion != n1));

    return 0;
}
