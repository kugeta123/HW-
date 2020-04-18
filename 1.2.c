#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int y[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for (int i = 0; i < 10; i++)
	{
		x[i] = y[i];
		printf("\n%d", x[i]);
	  }  
    
    return 0;
}
