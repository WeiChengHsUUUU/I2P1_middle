#include <stdio.h>

long long int balloons(long long int n, long long int x1, long long int x2, long long int x3);
long long int GCD(long long int a1, long long int a2);

int main(void)
{
    int T;
    long long int n, x1, x2, x3;

    scanf("%d", &T);
    while(T--){
        scanf("%lld%lld%lld%lld", &n, &x1, &x2, &x3);
        printf("%lld\n", balloons(n, x1, x2, x3));
    }

    return 0;
}

long long int balloons(long long int n, long long int x1, long long int x2, long long int x3)
{
    long long int a1, a2, a3;
    long long int LCM1, LCM2;

    a1 = GCD(n, x1);
    a2 = GCD(n, x2);
    a3 = GCD(n, x3);

    LCM1 = a1/GCD(a1, a2)*a2;
    LCM2 = LCM1/GCD(LCM1, a3)*a3;

    return n/LCM2;
}


long long int GCD(long long int a1, long long int a2)
{
    if(a1 == 0)
        return a2;
    return GCD(a2%a1, a1);
}
