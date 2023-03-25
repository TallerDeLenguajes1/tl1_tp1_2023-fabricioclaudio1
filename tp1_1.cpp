#include <stdio.h>

int main(){
    
    printf("Hola mundo\n");

    int num1=2, *num2;

    num2=&num1;

    printf("Contenido del puntero: %d \n",*num2);
    printf("Direccion de memoria almacenada en el puntero: %p\n", num2);
    printf("Direccion de memoria de la variable:  %p\n", &num1);
    printf("Direccion de memoria del puntero: %p\n", &num2);
    printf("Tamanio de memoria de la variable: %d\n", sizeof(num1));

    return 0;
}