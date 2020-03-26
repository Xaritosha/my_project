#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define i 10
#define j 10

int main()
{
    int a[i][j];
    int b[j];
    int z, p;

    for(z = 0; z < i; z++)
        for(p = 0; p < j; p++)
            a[z][p] = rand()%100;

    for(z = 0; z < j; z++){
        int min = INT_MAX;
        for(p = 0; p < i; p++)
        {
            if(a[p][z] < min && a[p][z] >= 0)
            {
                min = a[p][z];
                b[z] = a[p][z];
            }
        }
    }

    for(z = 0; z < i; z++){
        for(p = 0; p < j; p++)
            printf("%5d", a[z][p]);
        printf("\n");
    }

    for(z = 0; z < j; z++) printf("%d\t", b[z]);
    return 0;
}
