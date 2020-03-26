#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define i 5 /* Число строк матрицы */
#define j 10 /* Число столбцов матрицы */

int main()
{
    int a[i][j];
    int b[j]; /* Минимальное значение для строки */
    int c[j]; /* Максимальное значение для строки */
    int z, p, strmax, strmin, tmp;

    for(z = 0; z < i; z++)
        for(p = 0; p< j; p++)
            a[z][p] = rand()%100;

    for(z = 0; z < i; z++){
        for(p = 0; p < j; p++)
            printf("%5d", a[z][p]);
        printf("\n");
    }

    for(z = 0; z < i; z++){
        int min = INT_MAX;
        int max = INT_MIN;
        strmax = 0;
        strmin = 0;
        tmp = 0;
        for(p = 0; p< j; p++)
        {
            if(a[z][p] < min)
            {

                min = a[z][p];
                b[z] = a[z][p];
                strmin = p;

            }

            if(a[z][p] > max)
            {
                max = a[z][p];
                c[z] = a[z][p];
                strmax = p;
            }
        }

        tmp = a[z][strmin];
        printf("\n%d\t%d\t%d\t%d\t%d", z, a[z][strmax], a[z][strmin], strmax, strmin);
        a[z][strmin] = a[z][strmax];
        a[z][strmax] = tmp;
    }

    printf("\n\n");

    for(z = 0; z < i; z++){
        for(p = 0; p < j; p++)
            printf("%5d", a[z][p]);
        printf("\n");
    }

    return 0;
}
