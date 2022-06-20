#include <stdio.h>

int main(void)
{
    int x, y, z;
    int a, b, c;

    scanf("%d%d%d", &x, &y, &z);
    a = (x+y+z)/2 - y;
    b = (x+y+z)/2 - z;
    c = (x+y+z)/2 - x;
    printf("%d %d %d\n", a, b, c);

    return 0;
}
