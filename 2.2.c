#include <stdlib.h>
#include <stdio.h>

enum Enum
{
    one = 1,
    eleven = 11,
    heleven = 111,
    sheleven = 1111
};

int main(){
	int intArray[11];
     
    printf("%d\n", one | eleven);
    printf("%d\n", eleven & heleven);
    printf("%d\n", eleven ^ sheleven);
    printf("%d\n", heleven << 1);
    printf("%d\n", heleven >> 1);
    printf("%d\n", sheleven << 1);
    printf("%d\n", sheleven >> 1);
    printf("%d\n", one + eleven);
    printf("%d\n", heleven - eleven);
    printf("%d\n", eleven * sheleven);
    printf("%d\n", sheleven / eleven);
    
    return 0;
}
