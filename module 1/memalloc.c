#include <stdio.h>

int main()
{

    int *ptr;

    ptr = malloc(20);

    *(ptr + 0) = 123;
    *(ptr + 1) = 345;
    *(ptr + 2) = 678;

    printf("%d \n", *(ptr + 0));
    printf("%d \n", *(ptr + 1));
    printf("%d \n", *(ptr + 2));

    free(ptr);

    printf("after free\n");

    printf("%d \n", *(ptr + 0));
    printf("%d \n", *(ptr + 1));
    printf("%d \n", *(ptr + 2));

    return 0;
}