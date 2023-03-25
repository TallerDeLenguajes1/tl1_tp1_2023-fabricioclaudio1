#include <stdio.h>
float cuadrado(float num);//a
void cuadradoVoid(float num);//b
void Invertir(int a,int b);//d
void orden(int a,int b);

int main(){

    float num, resultado;

    printf("Ingrese un numero para devolver el cuadrado: \n");
    scanf("%f",&num);

    //a
    resultado= cuadrado(num);
    printf("El cuadrado de %.2f es: %.2f\n", num, resultado);

    //b
    cuadradoVoid(num);

    //c
    printf("Direccion de la variable recibida: %p\n", &num);
    printf("Contenido de la variable recibida: %.2f\n", num);

    //d
    int a, b;
    printf("Ingrese un numero entero: \n");
    scanf("%d",&a);
    printf("Ingrese otro numero entero: \n");
    scanf("%d",&b);

    Invertir(a, b);

    //e
    int c, d;
    printf("Ingrese un numero entero: \n");
    scanf("%d",&c);
    printf("Ingrese otro numero entero: \n");
    scanf("%d",&d);
    orden(c, d);

    return 0;
}

float cuadrado(float num){
    return (num * num);
}

void cuadradoVoid(float num){
    printf("(void) El cuadrado de %.2f es: %.2f\n", num, (num*num));
}

void Invertir(int a,int b){
    int aux;
    printf("A = %d, B= %d\n", a, b);
    aux=a;
    a=b;
    b=aux;
    printf("Ahora A = %d, B= %d\n", a, b);
}

void orden(int a,int b){
    if (a<b)
    {
        printf("Orden ascendente\n");
        printf("%d - %d\n", a, b);
    }
    else
    {
        Invertir(a, b);
        printf("Orden ascendente\n");
        printf("%d - %d\n", a, b);
    }
    
    
}