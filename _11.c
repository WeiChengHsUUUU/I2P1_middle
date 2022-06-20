#include <stdio.h>

int countnum(int N);

int main(void)
{
    int N;
    scanf("%d", &N);

    printf("%d\n", countnum(N));
    return 0;
}

int countnum(int N)
{
    int k = 0;
    while(3*k < N)
        k++;
    return (k-2)*2 + 3 + N - (k-1)*3 - 1;
}
