#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    // Reserva de memoria para el vector de punteros a caracteres
    char **nombres = (char **)malloc(5 * sizeof(char *));
    if (nombres == NULL)
    {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Solicitar y cargar los nombres en el vector
    printf("Ingrese 5 nombres:\n");
    for (int i = 0; i < 5; i++)
    {
        nombres[i] = (char *)malloc(100 * sizeof(char));
        if (nombres[i] == NULL)
        {
            printf("Error al asignar memoria.\n");
            return 1;
        }
        scanf("%s", nombres[i]);
    }

    // Mostrar los nombres ingresados
    printf("Los nombres ingresados son:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", nombres[i]);
    }

    // Liberar la memoria reservada
    for (int i = 0; i < 5; i++)
    {
        free(nombres[i]);
    }
    free(nombres);

    return 0;
}