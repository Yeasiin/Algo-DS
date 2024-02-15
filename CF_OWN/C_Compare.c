#include <stdio.h>

int main()
{
    char input1[21];
    char input2[21];

    scanf("%s %s", &input1, &input2);

    int index = 0;
    while (1)
    {

        // if (input1[index] == '\0' && input2[index] == '\0')
        // {
        //     printf("Same\n");
        //     break;
        // }
        // else if (input1[index] == '\0')
        // {
        //     printf("%s\n", input1);
        //     break;
        // }
        // else if (input2[index] == '\0')
        // {
        //     printf("%s", input2);
        //     break;
        // }

        if (input1[index] == input2[index])
        {
            index++;
        }
        else if (input1[index] < input2[index])
        {
            printf("%s\n", input1);
            break;
        }
        else
        {
            printf("%s\n", input2);
            break;
        }
    }

    return 0;
}