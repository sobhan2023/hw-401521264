#include <stdio.h>
int main()
{
    int n, x = 1, y = 1;
    scanf("%d", &n);
    if (n >= 1 && n <= 10)
    {
        for (int i = 1; i <= n; i++)
        {
            x = x * y;
            y++;
        }
        printf("%d", x);
    }
    return 0;
}