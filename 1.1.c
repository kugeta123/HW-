#include <stdlib.h>
#include <stdio.h>

struct male
{
	int age;
	int height;
};
struct female
{
	int age;
	int height;
};

int main ()
{
    struct male father;
    struct female mother;
    
	father.age = 60;
    father.height = 180;
    
    mother.age = 55;
    mother.height = 175;
    printf("\n%d",father.age);
    printf("\n%d",father.height);
    printf("\n%d",mother.age);
    printf("\n%d",mother.height);
    
    return 0;
}
