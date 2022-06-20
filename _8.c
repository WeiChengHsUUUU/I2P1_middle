#include <stdio.h>
#include <string.h>

char a[5];
char b[10];
int ans = 0;

void countstring(unsigned int len_a);


int main(void)
{
    int n;

    scanf("%s", &a);
    unsigned int len_a = strlen(a);

    scanf("%d", &n);
    while(n--){
        scanf("%s", &b);
        countstring(len_a);
    }
    printf("%d", ans);

    return 0;
}

void countstring(unsigned int len_a)
{
    unsigned int len_b = strlen(b);
    int temp = 0;

    for(int x = 0;x < len_b-len_a+1;x++){
        int sign = 0;
        for(int y = 0;y < len_a;y++){
            if(a[y] != b[x+y]){
                sign = 1;
                break;
            }
        }
        if(sign == 0)
            temp++;
    }
    if(ans < temp)
        ans = temp;
}
