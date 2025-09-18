#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char input;
    char output;
    
    printf("enter a character : ");
    scanf("%c", &input);
    
    output = input + 1;
    
    printf("the next character of %c (%i) is %c (%i)\n", input, input, output, output);

    system("PAUSE");
    return 0;
}
