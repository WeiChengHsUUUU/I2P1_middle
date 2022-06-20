#include <stdio.h>

long long int a[1000000+1];
long long int a_1[1000000+1];

int main(void)
{
    int n, q;
    int l, r, m;
    int i;

    scanf("%d%d", &n, &q);
    for(i = 1;i <= n;i++){
        scanf("%lld", &a[i]);
    }

    a_1[0] = 0;
    for(i = 1;i <= n;i++){
        if(a[i] > 0){
            a_1[i] = a_1[i-1] + a[i];
        }else{
            a_1[i] = a_1[i-1];
        }
        //printf("%d ", a_1[i]);

    }

    for(i = 0;i < q;i++){
        scanf("%d %d %d", &l, &r, &m);
        printf("%lld\n", a_1[l+m-1] - a_1[l-1]);
        }



    return 0;
}
