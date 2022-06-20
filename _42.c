#include <stdio.h>

int countnum(int r, int g,int b);

int main(void)
{
    int t;
    int r, g, b;

    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &r, &g, &b);
        printf("%d\n", countnum(r, g, b));
    }

    return 0;
}

int countnum(int r, int g,int b)
{
    int temp;
    if(r > b){
        temp = r;
        r = b;
        b = temp;
    }
    if(g > b){
        temp = g;
        g = b;
        b = temp;
    }
    if(r > g){
        temp = r;
        r = g;
        g = temp;
    }

    if(r+g <= b)
        return r+g;
    if(r+g > b && g == b)
        return b+r/2;
    if(r+g > b && g != b)
        return (r+g-b)/2+b;
}
