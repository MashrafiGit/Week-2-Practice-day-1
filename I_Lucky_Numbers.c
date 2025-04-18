#include <stdio.h>
int main()
{
    int x, y = 0, z = 0;
    scanf("%d", &x);

    y = x / 10;
    z = x % 10;
    // printf("%d %d", y, z);


    if (z % y == 0 || y % z == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}