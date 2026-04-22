#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main () 
{
    char str[] = {'r','i','s','h','a','v','\0'};
    printStr(str);
    return 0;
}