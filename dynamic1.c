#include<stdio.h>
#include<stdlib.h>   // for malloc , calloc , realloc and free

int main()
{
    int Arr[5];      //static memory allocation

    int Size = 0;

    int *ptr = NULL;

    printf("Enter number of elements");
    scanf("%d",&Size);

    ptr = (int *)malloc(Size * sizeof(int));

                     //use the memory

    free(ptr);

    return 0;
}