#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main ()
{
    int SIZE=1e9;
    
    clock_t start, finish;
    start = clock();

    int *num2[10][10],*t=1;
    for(int i=0;i<SIZE;i++) num2[0][0]=t;

    finish = clock();
    printf( "%f seconds\n", (double)(finish - start) / CLOCKS_PER_SEC);
    
    return 0;
}
