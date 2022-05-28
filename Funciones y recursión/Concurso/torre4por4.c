#include <stdio.h>
int main()
{
    // altura de la torre
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 24)
    {
        printf("%d", torres(n));
    }
}

torres(int n)
{
    int i, totalTor;
    for (i = 1; i < n; i++)
    {
        int j;
        for (j = 2; j < n; j++)
        {
            int k;
            for (k = 4; k < n; k++)
            {
                totalTor = i + j + k;
            }
        }
    }
    return totalTor;
}