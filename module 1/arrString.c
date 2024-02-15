#include <stdio.h>
#include <string.h>

int main()
{
    /* code */

    int arrLen = 2;
    char arr[][20] = {"hello", "world again"};

    for (int i = 0; i < arrLen; i++)
    {

        printf("%s\n", arr[i]);
        printf("len %d \n", strlen(arr[i]));
    }

    return 0;
}
