#include <stdio.h>

int findfactors(int L, int R);

int main(void)
{
    int T;
    int L, R;

    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &L, &R);
        printf("%d\n", findfactors(L, R));
    }
    return 0;
}

int findfactors(int L, int R)
{
    int ans = 0;
    int max = 0;
    for(int x = R;x >= L;x--){
        int temp = 0;
        for(int j = 1;j*j <= x;j++){
            if(x%j == 0 && j*j != x){
                temp = temp + 2;
            }else if(x%j == 0 && j*j == x){
                temp++;
            }
            if(temp >= max){
                max = temp;
                ans = x;
            }
        }
    }
    return ans;
}
