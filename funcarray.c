#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i , array[i]);
    }
    array[0] = 382;
    
    return 0;
}

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i , ptr[i]);
    }
}
int main () 
{
    int arr[]= {13,23 , 3 ,4};
   // printf("The value at index 0 is %d\n", arr[0]);
    //func1(arr);
   // printf("The value at index 0 is %d\n", arr[0]);

    func2(arr);

    return 0;
}