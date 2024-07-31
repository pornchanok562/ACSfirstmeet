#include <stdio.h>
int main()
{

    int r = 0;
    int i;
    int a;

    for (i = 0; i < 10; i++)
    {
        
        scanf("%d", &a);
        if (a <= 0)
        {
            break;
        }
        r += a;
    }
    printf("%d" , r);

    return 0;
}