#include <stdio.h>
#include <string.h>

int checkit(int head, int tail);

char s[2001];

int main(void)
{
    while(scanf("%s", &s)){
        int ans = 0;
        int len_s = strlen(s);
        for(int head = 0;head < len_s;head++){
            for(int tail = head+1;tail < len_s;tail++){
                if(checkit(head, tail) == 1)
                    ans++;
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}

int checkit(int head, int tail)
{
    int run;

    run = (tail-head+1)/2;

    for(int i = 0;i < run;i++){
        if(s[head+i] != s[tail-i])
            return 0;
    }
    return 1;
}
