#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i = n; i >= 1; i--)
    {
        for(int x = 1; x <= i; x++)
        {
            printf("%c ", 64 + i);
        }
        printf("\n");
    }

    return 0;
}