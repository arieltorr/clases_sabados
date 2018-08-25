#include <stdio.h>
#include <stdlib.h>
//este ejercicio es igual al anterio pero realizado con un "do while"

int main()
{
    int edad;
    int i=0;
    float acumulador=0;
    float promedio;
    int continuar; //no hace falta inicializar porque va a entrar con el "do"

    do
    {
    printf("\ningrese su edad:");
    scanf("%d",&edad);

    acumulador=acumulador+edad;
    i++;
    printf("desea continuar? :0/1 "); //aca es donde toma el valor la variable "continuar" que es la que ingresa el usuario
    scanf("%d",&continuar);
    }while(continuar);

    promedio=acumulador/i;
    printf("el promedio es: %.2f",promedio);




    return 0;
}

