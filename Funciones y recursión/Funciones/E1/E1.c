/*
 * Se reciben dos parámetos
 * Si la suma de los divisores de el primer parámetro es igual al segundo
 * y viceversa, entonces serán números amigos.
 * Sino, entonces no serán números amigos.
 */

#include <stdio.h>
int main()
{
    // El usuario ingresa dos números
    int A, B;
    scanf("%d, %d", &A, &B);
    if (divisores(A, B) && divisores(B, A))
    {
        printf("Es amigo");
    }
    else
    {
        printf("No es amigo");
    }
}

int divisores(int C, int D)
{
    int num;
    for (int i = 0; i < C; i++)
    {
        if (C % i == 0)
        {
            num = i++;
        }
    }

    if (D == num)
    {
        printf("Es amigo");
    }
}