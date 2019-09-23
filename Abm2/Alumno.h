#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    int nota1;
    int nota2;
    float promedio;
    eFecha fechaIngreso;
    int idCarrera;
    int isEmpty;
} eAlumno;

#endif // ALUMNO_H_INCLUDED

//faltan prototipos jaaj xdlol
// modificar el prototipo de mostrarAlumno y alumnos.
