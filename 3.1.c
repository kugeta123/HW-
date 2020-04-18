#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main ()
{
    int SIZE=1e9;
    
    clock_t start, finish;
    start = clock();

    int num[10][10];
    for(int i=0;i<SIZE;i++) num[0][0]=1;

    finish = clock();
    printf( "%f seconds\n", (double)(finish - start) / CLOCKS_PER_SEC);
    
    return 0;
}
