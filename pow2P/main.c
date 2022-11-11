#include <stdio.h>
#include <math.h>
int main()
{
    int n, tavan;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i < (n + 5); i++)
        {
            tavan = pow(2, i);
            if (n < tavan)
            {
                printf("%ld", tavan);
                break;
            }
        }
    }
    return 0;
}