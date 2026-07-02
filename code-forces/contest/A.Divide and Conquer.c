#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);

    while (loop--)
    {
        int x, y;
        scanf("%d%d", &x, &y);

        if (x % y == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}