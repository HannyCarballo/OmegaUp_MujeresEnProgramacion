// Suma dos números
#include <stdio.h>
suma(int, int);
void main()
{
    int a, b;
    printf("Ingresa dos numeros\n");
    scanf("%d %d", &a, &b);
    printf("La suma de los dos numeros es %d", suma(a, b));
}

int suma(int a, int b)
{
    int c = a + b;
    return c;
}