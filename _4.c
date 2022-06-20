#include <stdio.h>
#include <string.h>

void checkit(int head, int tail, int len_s);

int ans;
char s[2000];

int main(void)
{
    while(scanf("%s", &s) != EOF){
        ans = 0;
        int len_s = strlen(s);
        for(int head = 0;head < len_s;head++){
            checkit(head, head+1, len_s);
            checkit(head, head+2, len_s);
        }

        printf("%d\n", ans);
    }
    return 0;
}

void checkit(int head, int tail, int len_s)
{
    if(s[head] == s[tail]){
        ans++;
        if(head-1 >= 0 && tail+1 <= len_s-1)
            checkit(head-1, tail+1, len_s);
    }
}
