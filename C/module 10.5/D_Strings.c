#include <stdio.h>
#include <string.h>

int main()
{
    char str1[11];
    scanf("%s", &str1);

    char str2[11];
    scanf("%s", &str2);

    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int str3Len = (str1Len + str2Len) + 1;
    char str3[str3Len];
    for (int i = 0; i < str3Len; i++)
    {
        if (i < str1Len)
        {
            str3[i] = str1[i];
        }
        else
        {
            str3[i] = str2[i - str1Len];
        }

        if (i == (str1Len + str2Len))
        {
            str3[i] = '\0';
        }
    }

    printf("%d %d\n", str1Len, str2Len);
    printf("%s\n", str3);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s ", str1);
    printf("%s", str2);

    return 0;
}