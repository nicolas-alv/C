#include "carrera.h"

void mostrarCarreras(eCarrera carreras[], int tam){
    printf("   Id     Descripcion\n\n");
    for (int i=0; i < tam; i++){

        mostrarCarrera(carreras[i]);
    }

}
void mostrarCarrera(eCarrera){

    printf(" %d      %s\n", carrera.id, carrera.descripcion);
}

//poner aca la funcion menu y arriba el prototipo de menu xdlol y agregar (7- Mostrar carreras) y los de abao pasan a ser 8, 9, 10, etc.
