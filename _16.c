#include <stdio.h>

int main(void)
{
    double x, y;
    int z;

    scanf("%lf%lf%d", &x, &y, &z);
    printf("%.*lf", z, x*y);

    return 0;
}
