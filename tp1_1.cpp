#include <stdio.h>

int main()
{
    int variable = 10, memory, *punt;
    punt = &variable;
    printf("Hola mundo\n");

    memory = sizeof(variable);

    printf("El contenido del puntero es: %d\n", punt);
    printf("La direccion de memoria de la variable es: %d\n", &variable);
    printf("La direccion de memoria del puntero es: %d\n", &punt);
    printf("La cantidad de memoria usada por la variable es: %d\n", memory);
    printf("El contenido del puntero es: %d\n", *punt);

    return 0;
}