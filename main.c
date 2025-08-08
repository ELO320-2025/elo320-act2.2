#include <stdio.h>


// Selecciona 4 tipos de datos diferentes y agrégalos al programa para que solicite al usuario ingresar
// información relevante utilizando esos tipos. Luego, muestra los datos ingresados en la consola.
int main() {
    char nombre[50];
    int edad;
    float promedio;
    char inicialCarrera;

    printf("=== Ficha de Estudiante ===\n");

    printf("Ingresa tu nombre: ");
    scanf("%49s", nombre); // Lee una palabra sin espacios

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Ingresa tu promedio (ej. 5.5): ");
    scanf("%f", &promedio);

    printf("Ingresa la inicial de tu carrera (ej. T para Telemática): ");
    scanf(" %c", &inicialCarrera); // Nota: espacio antes de %c para ignorar saltos de línea previos

    printf("\n--- Datos ingresados ---\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Inicial de carrera: %c\n", inicialCarrera);

    return 0;
}
