#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombres [5] [20];

   /* printf("Ingrese un nombre: ");
    gets(nombres[0]);*/ //porque este seria solo el primer nombre, antes iba sin [0] porque era un solo nombre.

    for(int i=0; i<5; i++){

        printf("Ingrese un nombre: ");
        fflush(stdin);
        gets(nombres[i]);

    }
    for(int i=0; i<5; i++){

     printf("%s\n", nombres[i]);

    }

    return 0;
}
