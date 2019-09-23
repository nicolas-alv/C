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
    int isEmpty;
} eAlumno;


#endif // ALUMNO_H_INCLUDED

void mostrarAlumno(eAlumno x);
void mostrarAlumnos(eAlumno vec[], int tam);
void ordenarAlumnos(eAlumno vec[], int tam);
void inicializarAlumnos(eAlumno alumnos[], int tam);
int buscarLibre(eAlumno alumnos[], int tam);
int buscarAlumno(int legajo, eAlumno alumnos[], int tam);
eAlumno newAlumno(int legajo, char nombre[], char sexo, int edad, int n1, int n2, eFecha fecha);
int altaAlumno(eAlumno alumnos[], int tam);
int altaAlumnoAuto(eAlumno alumnos[], int tam, int legajo);
int bajaAlumno(eAlumno alumnos[], int tam);
int modificarAlumno(eAlumno alumnos[], int tam);
int hardcodearAlumnos(eAlumno alumnos [], int tam, int cantidad);
int menu();

