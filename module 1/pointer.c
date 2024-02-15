#include <stdio.h>

int main()
{

    int age = 22;

    int *pAge = &age;

    int **dpAge = &pAge;

    printf("Say dpAge %d \n", dpAge);
    printf("Say pAge %d \n", pAge);

    printf("Say &dpAge %d \n", &dpAge);
    printf("Say &pAge %d \n", &pAge);

    printf("Say *dpAge %d \n", *dpAge);
    printf("Say **dpAge %d \n", **dpAge);
    printf("Say *pAge %d \n", *pAge);

    return 0;
}