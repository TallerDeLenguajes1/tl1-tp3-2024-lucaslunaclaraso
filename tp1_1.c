#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int produccion[5][12];

    // Generar valores aleatorios y asignarlos a la matriz de producción
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            // Genera valores aleatorios entre 10000 y 50000
            produccion[i][j] = rand() % (50000 - 10000 + 1) + 10000;
        }
    }

    // Mostrar la matriz de producción
    printf("Produccion por aNIo:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ANIo %d: ", i + 1);
        for (int j = 0; j < 12; j++)
        {
            printf("%d ", produccion[i][j]);
        }
        printf("\n");
    }

    // Calcular el promedio de ganancia por año
    double promedio_anual[5];
    for (int i = 0; i < 5; i++)
    {
        int suma = 0;
        for (int j = 0; j < 12; j++)
        {
            suma += produccion[i][j];
        }
        promedio_anual[i] = (double)suma / 12;
    }

    // Mostrar los promedios por pantalla
    printf("Promedio de ganancia por anio:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Anio %d: %.2f\n", i + 1, promedio_anual[i]);
    }
    // Encontrar el valor máximo y su posición
    int maximo = produccion[0][0];
    int max_ano = 0;
    int max_mes = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (produccion[i][j] > maximo)
            {
                maximo = produccion[i][j];
                max_ano = i + 1; // Se suma 1 porque los años comienzan desde 1
                max_mes = j + 1; // Se suma 1 porque los meses comienzan desde 1
            }
        }
    }

    // Encontrar el valor mínimo y su posición
    int minimo = produccion[0][0];
    int min_ano = 0;
    int min_mes = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (produccion[i][j] < minimo)
            {
                minimo = produccion[i][j];
                min_ano = i + 1; // Se suma 1 porque los años comienzan desde 1
                min_mes = j + 1; // Se suma 1 porque los meses comienzan desde 1
            }
        }
    }

    // Mostrar el valor máximo y su posición
    printf("Valor máximo de producción:\n");
    printf("Valor: %d\n", maximo);
    printf("Anio: %d\n", max_ano);
    printf("Mes: %d\n", max_mes);

    // Mostrar el valor mínimo y su posición
    printf("\nValor mínimo de producción:\n");
    printf("Valor: %d\n", minimo);
    printf("Anio: %d\n", min_ano);
    printf("Mes: %d\n", min_mes);

    return 0;
}