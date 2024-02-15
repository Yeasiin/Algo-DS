#include <stdio.h>

int main()
{
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    long long int doll = 0;

    while (body != 0)
    {

        if (eye != 0 && mouth != 0)
        {
            if (mouth <= eye && mouth <= body)
            {
                doll += mouth;
                eye -= mouth;
                body -= mouth;
                mouth = 0;
            }
            else
            {
                doll += eye;
                mouth -= eye;
                body -= eye;
                eye = 0;
            }
        }
        else
        {
            long long _doll = eye / 2;

            if (_doll > body)
            {
                doll += body;
                eye = 0;
                break;
            }
            else
            {
                doll += _doll;
                break;
            }
        }
    }
    printf("%lld", doll);

    return 0;
}