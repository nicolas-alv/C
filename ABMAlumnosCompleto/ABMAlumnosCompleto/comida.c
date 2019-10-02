#include "comida.h"



void mostrarComidas(eComida comidas[], int tam){
    printf("\n   Id      Descripcion    Precio\n\n");
    for(int i=0; i < tam; i++){
        mostrarComida( comidas[i]);
    }
    printf("\n");
}

void mostrarComida(eComida comida){

    printf("  %d      %10s    %4.2f\n", comida.id, comida.descripcion, comida.precio);

}


int cargarDescComida(int id, eComida comidas[], int tam, char desc[]){
    int todoOk = 0;

    for(int i=0; i < tam; i++){
        if( id == comidas[i].id){
            strcpy(desc, comidas[i].descripcion);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

