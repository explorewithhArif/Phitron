#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}