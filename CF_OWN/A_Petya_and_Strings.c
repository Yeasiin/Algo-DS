#include <stdio.h>

int main()
{

    char str1[101], str2[101];

    scanf("%s", &str1);
    scanf("%s", &str2);

    int i = 0;
    int lex = 0;

    while (i < 10)
    {

        if (str1[i] == '\0' && str2[i] == '\0')
        {
            lex = 0;
            break;
        }
        else if (str1[i] == '\0')
        {
            lex = -1;
            break;
        }
        else if (str2[i] == '\0')
        {
            lex = -1;
            break;
        }

        char _str1 = str1[i];
        char _str2 = str2[i];

        if (_str1 < 'a')
        {
            _str1 += 32;
        }
        if (_str2 < 'a')
        {
            _str2 += 32;
        }

        if (_str1 == _str2)
        {
            i++;
        }
        else if (_str1 < _str2)
        {
            lex = -1;
            break;
        }
        else if (_str1 > _str2)
        {
            lex = 1;
            break;
        }
    }

    printf("%d", lex);

    return 0;
}