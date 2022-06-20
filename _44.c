#include <stdio.h>

int findnumk(int a[5001], int head, int tail, int m, int k);
int findnum(int a[5001], int head, int tail, int m, int k);
int min(int x, int y, int z);

int main(void)
{
    int t;
    int n, m, k;
    int a[5001];
    int i, j;

    scanf("%d", &t);

    for(i = 0;i < t;i++){
        scanf("%d%d%d", &n, &m, &k);
        for(j = 0;j < n;j++){
            scanf("%d", &a[j]);
        }

        printf("%d\n", min(findnumk(a, 0, n-1, m, k), findnumk(a, 0, n-1, m, k), findnum(a, 0, n-1, m, k)));
    }
    return 0;
}


int findnumk(int a[5001], int head, int tail, int m, int k)
{
    if(m <= k+1){
        int b = 0;
        for(int h = head;h <= head+m-1;h++){
            if(a[h] > b){
                b = a[h];
            }
        }

        for(int h = tail;h >= tail-m+1;h--){
            if(a[h] > b){
                b = a[h];
            }
        }
        return b;
    }else{
        return(min(findnumk(a, head+1, tail, m-1, k), findnumk(a, head, tail-1, m-1, k), findnumk(a, head, tail-1, m-1, k)));
    }
}

int findnum(int a[5001], int head, int tail, int m, int k)
{
    for(int h = 0;h < k;h++){
        if(a[head] < a[tail]){
            head++;
        }else{
            tail--;
        }
    }
    int b = 0;
    for(int h = 0;h < m-k;h++){
        if(a[head+h] > b)
            b = a[h];
    }
    for(int h = 0;h < m-k;h++){
        if(a[tail-h] > b)
            b = a[h];
    }
    return b;
}

int min(int x, int y, int z)
{
    if(x >= y && z >= y){
        return y;
    }else if(y >= x && z >= x){
        return x;
    }else if(x >= z && y >= z){
        return z;
    }
}
