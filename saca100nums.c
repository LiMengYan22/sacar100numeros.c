#include <stdio.h>
int main ()
{
    int *arreglo;
    int resultado=0;
    int tamano=0;

    printf("Programa que suma con una funcion recursiva\n\n\n");
    printf("Ingrese el tamano del array:  ");
    scanf("%i",&tamano);
    arreglo = new int[tamano];

    for(int i=0;i<tamano;i++)
    {
    printf("Ingrese el elemento numero %i :",i+1);
    scanf("%i",&arreglo[i]);
    }

    resultado = sumar(arreglo,tamano);
    printf("\nEl resultado de la suma es: %i",resultado);
    printf("\n");
    printf("\n");
    printf("\n");
    return EXIT_SUCCESS;
}
int sumar(int a[],int n)
{
    if(n==1)
    {
        return a[0];

    }else{
        return a[n-1]+sumar(a,n-1);
    }

}
