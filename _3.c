#include <stdio.h>

void whichone(int x, int y, long long int z);

int main(void)
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);
    whichone(x, y, z);

    return 0;
}

void whichone(int x, int y, long long int z)
{
    long long int i;

    if(z-y == y-x){
        i = y-x;
        printf("%d %lld", x-i, z+i);
    }else if(z/y == y/x){
        i = y/x;
        printf("%d %lld", x/i, z*i);
    }
}
