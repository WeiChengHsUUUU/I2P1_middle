#include <stdio.h>

double a[5002] = {0};
double pre[5002] = {0};
void prefixsum(int n);
double maxaverage(int n, int k);

int main(void)
{
    int n, k;

    scanf("%d%d", &n, &k);
    for(int x = 0;x < n;x++){
        scanf("%lf", &a[x+1]);
        //printf("%lf ", a[x+1]);
    }

    prefixsum(n);

    printf("%.3lf\n", maxaverage(n, k));

    return 0;
}

void prefixsum(int n)
{
    for(int x = 1;x <= n;x++){
        pre[x] = pre[x-1] + a[x];
        //printf("%lf ", pre[x]);
    }

}

double maxaverage(int n, int k)
{
    double ans = 0;

    for(int x = 1;x <= n;x++){
        for(int j = x+k-1;j <= n;j++){
            if((pre[j]-pre[x-1])/(j-x+1) > ans)
                ans = (pre[j]-pre[x-1])/(j-x+1);
        }
    }
    return ans;
}
