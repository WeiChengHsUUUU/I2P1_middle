#include <stdio.h>

int a[22];

int num(int id, int sum, int k, int n);

int main(void)
{
    int n, k;

    scanf("%d%d", &n, &k);
    for(int x = 1;x <= n;x++)
        scanf("%d", &a[x]);

    printf("%d\n", num(1, 0, k, n));

    return 0;
}

int num(int id, int sum, int k, int n)
{
    if(sum == k)
        return 1;
    if(id > n || sum > k)
        return 0;
    return num(id+1, sum+a[id], k, n) + num(id+1, sum, k, n);
}
