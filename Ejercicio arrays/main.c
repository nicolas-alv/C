#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void mostrarAlumnos(int leg[], int edades[], char sexo[], int n1[], int n2[], float prom[], int tam);
int main()
{
    int i;
    int legajos[TAM];
    int edades [TAM];
    char sexos [TAM];
    int notasp1 [TAM];
    int notasp2 [TAM];
    float promedios [TAM];

    for (i=0; i<TAM; i++)
    {

        printf("Ingrese legajo: ");
        scanf("%d ", &legajos[i]);

        printf("Ingrese edades: ");
        scanf("%d ", &edades[i]);

        printf("Ingrese sexo: ");
        scanf("%c ", &sexos[i]);

        printf("Ingrese nota del primer parcial: ");
        scanf("%d ", &notasp1[i]);

        printf("Ingrese nota del segundo parcial: ");
        scanf("%d ", &notasp2[i]);

        pormedios[i]= (float) (notasp1[i] + notasp2[i]) / 2;

        mostrarAlumnos(legajos, edades, sexos, notasp1, notasp2, promedios);

    }
    return 0;
}

void mostrarAlumnos(int leg[], int edades[], char sexo[], int n1[], int n2[], float prom[], int tam)
{

    printf(" Legajo, Edad, Sexo, Nota1, Nota2, Promedio\n\n");
    for(int=0; i<tam; i++)
    {

        printf("%d  %d  %c  %d  %d  %.2f", leg[], edades[], sexo[], n1[], n2[], prom[]);

    }


}

