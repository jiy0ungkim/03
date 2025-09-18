#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    printf("enter a numerator  : ");
    scanf("%d", &a);
    
    printf("enter a denominator : ");
    scanf("%d", &b); 
    
    printf("the result is  %f.\n", (float)a/b);

    system("PAUSE");
    return 0;
}
