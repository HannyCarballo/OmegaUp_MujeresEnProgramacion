#include <stdio.h>
unsigned long long recursivo(unsigned long long);
int main()
{
    unsigned long long n;
    // El usuario ingresa un número
    scanf("%llu", &n);
    // El rango va de 0 a 20
    if (0 <= n && n <= 20)
    {
        printf("%llu", recursivo(n));
    }
    return 0;
}

unsigned long long recursivo(unsigned long long n)
{
    // Caso base
    if (n == 0)
    {
        return 1;
    }
    // Se llama a si mismo
    else
    {
        return n * recursivo(n - 1);
    }
}