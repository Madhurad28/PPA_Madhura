#include<stdio.h>
#include<stdlib.h>   // for malloc , calloc , realloc and free

int main()
{

    int *ptr = NULL;

    ptr = (int *)malloc(5 , sizeof(int));
    //use of memory

    ptr = (int *)realloc(ptr , 10 * sizeof(int));   //behaves like malloc
    free(ptr);

    return 0;
}