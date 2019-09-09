#include <stdio.h>
#include <stdlib.h>

void mostrarVectorInt (int vec[], int tam);
void mostrarVectorChar (char vec[], int tam);
void mostrarVectorNombre(char vec[], int tam);
void mostrarVectorReales(float vec[], int tam);

int main()
{
    int numeros[]= { 4, 2, 16, 78, 34, 56, 32, 90, 100, 567};
    char x[]= {'a', 'e', 'i', 'o', 'u'};
    char nombre[]= {'N', 'i', 'c', 'o', 'l', 'a', 's'};
    float reales[]= {53.21, 55.23, 89.09, 11.88, 90.23};

    mostrarVectorInt(numeros, 10);
    printf("\n\n");
    mostrarVectorChar(x, 5);
    printf("\n\n");
    mostrarVectorNombre(nombre, 7);
    printf("\n\n");
    mostrarVectorReales(reales, 5);

    return 0;
}

void mostrarVectorInt(int vec[], int tam)
{

    for(int i=0; i<tam; i++)
    {

        printf("%d ", vec[i]);

    }

}

void mostrarVectorChar(char vec[], int tam)
{

    for(int i=0; i<tam; i++)
    {

        printf("%c ", vec[i]);
    }

}

void mostrarVectorNombre(char vec[], int tam)
{

    for(int i=0; i<tam; i++)
    {

        printf("%c", vec[i]);
    }

}

void mostrarVectorReales(float vec[], int tam)
{

    for(int i=0; i<tam; i++)
    {

        printf("%.2f ", vec[i]);
    }

}



