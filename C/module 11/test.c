#include <stdio.h>

int main()
{

    char arr[100];

    int asciiStar = 97;
    int totalAlphabet = 26;

    int count[26] = {0};

    scanf("%s", &arr);

    for (int i = 0; i < totalAlphabet; i++)
    {
        if (arr[i] == '\0')
            break;

        if (arr[i] < 'a')
        {
            arr[i] += 32;
        }

        count[arr[i] - asciiStar]++;
    }

    for (int i = 0; i < totalAlphabet; i++)
    {

        if (count[i] != 0)
        {
            printf("%c => %d\n", i + asciiStar, count[i]);
        }
    }

    return 0;
}