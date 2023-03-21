#include <stdio.h>

int intAlCuadrado(int num);
void voidAlCuadrado(int *num, int *cuadrado);
void recibirVariable(int *num);
void invertir(int *num1, int *num2, int bandera);
void orden(int *num1, int *num2, int bandera);

int main()
{
    int num1, num2, cuadrado = 0, num3, invertirA, invertirB, ordenA, ordenB, bandera = 0, *Pnum, *Pcuadrado;
    Pnum = &num2;
    Pcuadrado = &cuadrado;

    printf("Apartado A\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("El cuadrado de %d es %d\n\n", num1, intAlCuadrado(num1));

    printf("Apartado B\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num2);
    voidAlCuadrado(Pnum, Pcuadrado);
    printf("El cuadrado de %d es %d\n\n", num2, cuadrado);

    printf("Apartado C\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num3);
    recibirVariable(&num3);

    printf("Apartado D\n");
    printf("Ingrese dos numeros para invertir orden: ");
    scanf("%d %d", &invertirA, &invertirB);
    invertir(&invertirA, &invertirB, bandera);
    printf("\nLos numeros invertidos de orden son %d y %d\n\n", invertirA, invertirB);

    printf("Apartado E\n");
    printf("Ingrese dos numeros para ordenar: ");
    scanf("%d %d", &ordenA, &ordenB);
    orden(&ordenA, &ordenB, bandera);
    printf("Los numeros ordenados de menor a mayor son %d y %d\n\n", ordenA, ordenB);

    printf("Apartado F\n");
    bandera++;
    invertir(&invertirA, &invertirB, bandera);
    orden(&ordenA, &ordenB, bandera);
    return 0;
}

int intAlCuadrado(int num)
{
    return num * num;
}

void voidAlCuadrado(int *num, int *cuadrado)
{
    *cuadrado = *num * *num;
}

void recibirVariable(int *num)
{
    printf("La direccion de memoria recibida es %d y su contenido es %d\n\n", num, *num);
}

void invertir(int *num1, int *num2, int bandera)
{
    int aux;
    if(bandera == 1)
    {
        printf("Ingrese dos numeros: ");
        scanf("%d %d", &(*num1), &(*num2));
        printf("Los numeros leidos son %d y %d\n\n", *num1, *num2);
    }
    else
    {
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
}

void orden(int *num1, int *num2, int bandera)
{
    int aux;
    if(bandera == 1)
    {
        printf("Ingrese dos numeros: ");
        scanf("%d %d", &(*num1), &(*num2));
        printf("Los numeros leidos son %d y %d", *num1, *num2);
    }
    else
    {
        if(*num1 > *num2)
        {
            aux = *num1;
            *num1 = *num2;
            *num2 = aux;
        }
    }
    
}