#include <stdio.h>
int main () 
{
    printf("Lets learn about pointers\n");
    int a= 76;
    int* ptra = &a;
    printf("The address of pointer to a is %x\n", &ptra);
    printf("The value of a is %x\n", *ptra);
    
    return 0;
}