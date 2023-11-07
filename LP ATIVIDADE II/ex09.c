#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, c;

    printf("Informe um numero:");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
    case 1:
        break;
    default:
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d e um numero primo\n",n);
        }
        else
        {
           printf ("%d nao e um numero primo\n",n);
        }

        break;
    }

    return 0;
}