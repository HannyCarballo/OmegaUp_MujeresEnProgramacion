#include <stdio.h>
alfombra(int);
int main()
{
    // Se recibe el entero positivo N que representa la alfombra de Sierpinski
    int N;
    scanf("%d", &N);
    if (1 <= N && N <= 729)
    {
        if (((N % 3 == 0) && (N % 6 != 0)) || (N == 1))
        {
            alfombra(N);
        }
    }
}

int alfombra(int N)
{
    if (N == 1)
    {
        printf("%c", 46);
    }
    else
    {
        int i;
        for (i = 0; i < N; i++)
        {
            for (i = 0; i < N; i++)
            {
                printf("%c", 46);
            }
            printf("\n");
            for (i = 0; i < (N / 3); i++)
            {
                printf("%c%c%c", 46, 88, 46);
            }
            printf("\n");
            for (i = 0; i < N; i++)
            {
                printf("%c", 46);
            }
            printf("\n");
            if (N > 3)
            {
                int i;
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c", 46);
                }
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c", 88);
                }
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c", 46);
                }
                printf("\n");
                for (i = 0; i < (N / 9); i++)
                {
                    printf("%c%c%c", 46, 88, 46);
                }
                for (i = 0; i < (N / 9); i++)
                {
                    printf("%c%c%c", 88, 88, 88);
                }
                for (i = 0; i < (N / 9); i++)
                {
                    printf("%c%c%c", 46, 88, 46);
                }
                printf("\n");
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c", 46);
                }
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c", 88);
                }
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c", 46);
                }
                printf("\n");
                for (i = 0; i < N; i++)
                {
                    printf("%c", 46);
                }
                printf("\n");
                for (i = 0; i < (N / 3); i++)
                {
                    printf("%c%c%c", 46, 88, 46);
                }
                printf("\n");
                for (i = 0; i < N; i++)
                {
                    printf("%c", 46);
                }
                printf("\n");
            }
        }
    }
}