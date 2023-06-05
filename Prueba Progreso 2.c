#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *alumnos[] = {
    "Alumno 1",
    "Alumno 2",
    "Alumno 3",
    "Alumno 4",
    "Alumno 5",
    "Alumno 6",
    "Alumno 7",
    "Alumno 8",
    "Alumno 9",
    "Alumno 10",
    "Alumno 11",
    "Alumno 12",
    "Alumno 13",
    "Alumno 14",
    "Alumno 15",
    "Alumno 16",
    "Alumno 17",
    "Alumno 18",
    "Alumno 19",
    "Alumno 20",
    "Alumno 21",
    "Alumno 22",
    "Alumno 23"};
int main()
{

    srand(time(NULL));
 int Datos[2][3][23];
 int s,p,al;// Se declara s=semestres,p=progresos,al=alumnos
 
      for (s = 0; s < 2; s++)
    {
        for (p = 0; p < 3; s++)
        {
            for (al = 0; al < 23; al++)
            {
                Datos[s][p][al] = rand() % 11; // Generar los datos aleatoriamente entre 0 y 10
               }
        }
    }
for (s = 0; s < 2; s++)
    {
        printf("semestre %d:\n", s + 1);
        for (p = 0; p < 3; p++)
        {
            printf("progreso %d:\n", p + 1);
            for (al = 0; al < 23; al++)
            {
                printf("Alumnos %d - %s: %d alumnos\n", al + 1, alumnos[al], Datos[s][p][al]);
            }
        }
    }

// mayor promedio del semestre
  int smn = 0; //semestre de mayores notas
  int mn = 0; // mayores notas

    for (s = 0; s < 2; s++)
    {
        int tn = 0; // total de notas
      
        for (p = 0; p < 3; p++)
        {
            for (al = 0; al < 23; al++)
            {
                tn += Datos[s][p][al];
            }
        }

        if (tn > mn)
        {
            mn = tn;
            smn =  s + 1;
        }
    }

    printf("El semestre que tuvo el promedio mas alto fue %d",smn);

        return 0;
}
  