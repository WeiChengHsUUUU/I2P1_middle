#include <stdio.h>
int sum[1000000+1] = {0};

void count1(int x, int y);

int main(void)
{
    int t;
    int a, b;

    scanf("%d", &t);
    count1(1, 1000000);
    while(t--){
        scanf("%d%d", &a, &b);
        printf("%d\n", sum[b] - sum[a-1]);
    }

    return 0;
}

void count1(int x, int y)
{
    int countit;

    for(;x <=y;x++){
        countit = 0;
        int find = x;

        while(find != 0){
            if(find%10 == 1){
                countit++;
            }
            find = find/10;
        }
        sum[x] = countit;
    }

    for(x = 1;x <= y;x++){
        sum[x] = sum[x] + sum[x-1];
    }
}
