#include <stdio.h>

int a[200001] = {0};
int b[100001] = {0};

int main(void)
{
    int n, m;
    int temp;

    scanf("%d%d", &n, &m);
    for(int x = 1;x <= m;x++){

        scanf("%d", &temp);
        if(a[temp] == 0){
            b[x] = temp;
            a[b[x]] = 1;
        }else{
            b[x] = temp;
            for(int j = 1;j < x;j++){
                if(b[j] == temp)
                    b[j] = -1;
            }
        }

    }

    for(int x = m;x >= 1;x--){
        if(b[x] != -1)
            printf("%d\n", b[x]);
    }
    for(int x = 1;x <= n;x++){
        if(a[x] == 0)
            printf("%d\n", x);
    }

    return 0;
}
