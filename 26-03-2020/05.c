#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define i 5 /* Число строк матрицы */
#define j 10 /* Число столбцов матрицы */

int main()
{
    int a[i][j];
    int b[j]; /* Число минимумов = число стобцов */
    int z, p, f = 0;
    srand(time(NULL));

    for(z = 0; z < i; z++) {
        for (p = 0; p < j; p++) {
            a[z][p] = rand() % 100;
            printf("%5d", a[z][p]);
        }
        printf("\n");
    }
    for(z = 0; z < j; z++){
        p = 0;
        f = 0;
        while(p < j){
            if(a[p][z] % 2 == 0){
                c++;
                if(c == 5){
                    printf("Column #%d has only odd numbers", i+1);
                    return 0;
                }
            } else {
                break;
            }
            p++;
        }
    }
    printf("Are no any columns with only odd numbers.");
    return 0;
}
