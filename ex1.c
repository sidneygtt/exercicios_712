#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char *C)
{

    
    while( *C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");

}    
    
int main()
{
    char C[100];
    scanf("%s", C);    
    print(C);
}
