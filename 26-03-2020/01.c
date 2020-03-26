#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define i 5 
#define j 10 

int main()
{
   int a[i][j];
    int b[j]; 
    int n, m;

    for(n = 0; n < i; n++)
        for(m = 0; m < j; m++)
            a[n][m] = rand()%108;

    for(n = 0; n < j; n++){
        int min = INT_MAX;
        for(m = 0; m < i; m++)
        {
            if(a[m][n] < min)
            {
                min = a[m][n];
                b[n] = a[m][n];
            }
        }
    }

    for(n = 0; n < i; n++){
        for(m = 0; m < j; m++)
            printf("%5d", a[n][m]);
        printf("\n");
    }

    for(n = 0; n < j; n++) printf("%d\t", b[n]);
    return 0;
}
