
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
#include "carrera.h"

#define TAM 10




int cargarDescCarrera(int idCarrera, eCarrera carreras[]m int tam, char descripcion[]);


int main()
{
    eAlumno lista[TAM];
    eCarrera carreras[]= {
        {1000, "TUP"},
        {1001, "TUSI"},
        {1002, "LIC"}

    }
    int legajo = 20000;
    char salir = 'n';
    int altaOK;


    inicializarAlumnos(lista, TAM);

    legajo=legajo + hardcodearAlumnos(lista, TAM, 5);


    do
    {
        switch(menu())
        {
        case 1:
            // aca va el alta alumno
            //altaAlumno(lista, TAM);
            if (altaAlumnoAuto(lista, TAM, legajo))
            {

                legajo++;

            }
            break;
        case 2:
            bajaAlumno(lista, TAM);
            break;
        case 3:
            modificarAlumno(lista, TAM);
            // aca va modificar alumno
            break;
        case 4:
            mostrarAlumnos(lista, TAM);
            // aca va el alta alumno
            break;
        case 5:
            ordenarAlumnos(lista, TAM);
            // aca va el alta alumno
            break;
        case 6:
            printf("Informes\n");
            // aca va el alta alumno
            break;
        case 7:
            mostrarCarreras(carreras, 3)
            break;
        case 8:
            printf("Corfirma Salida?");
            fflush(stdin);
            salir = getch();
            // aca va el alta alumno
            break;
        default:
            printf("Opcion invalida\n");
        }
        system("pause");
    }
    while(salir == 'n');

    return 0;
}

