#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// strcpy
// strlen
//gets
//strncpy
//strcmp
//strcimp (no le da importancia a las mayusculas y minusculas
//strcat
//strlwr

int main()
{


    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];
    char auxCad [100];
    int i=0;

    printf("Ingresa un nombre kpo: ");
    gets(auxCad);

    while (strlen(auxCad) > 19){

        printf("No man, muy largo jaja\n Ingresa otro nombre: ");
        gets(auxCad);

    }
    strcpy(nombre, auxCad);


    printf("\nIngresa un apellido kpo: ");
    gets(auxCad);

    while (strlen(auxCad) > 19){

        printf("No man, muy largo jaja\n Ingresa otro apellido: ");
        gets(auxCad);

    }
    strcpy(apellido, auxCad);


    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]= toupper(nombreCompleto[0]);

    while (nombreCompleto[i] != '\0'){

        if (nombreCompleto[i] == ' '){

            nombreCompleto[i+1]= toupper(nombreCompleto[i+1]);
        }
        i++;
    }
    printf("%s", nombreCompleto);
   return 0;
}
