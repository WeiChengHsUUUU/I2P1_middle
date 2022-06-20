#include <stdio.h>
#include <string.h>

char a[1002];
char b[1002];
int checksame(char a[1002], char b[1002], int al, int ar, int bl, int br);

int main(void)
{
    char c;

    scanf("%s", &a);
    scanf("%s", &b);

    if(checksame(a, b, 0, strlen(a)-1, 0, strlen(b)-1)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}

int checksame(char a[1002], char b[1002], int al, int ar, int bl, int br)
{
    int sign = 0;

    for(int x = 0;x <= ar-al;x++){
        if(a[al+x] != b[bl+x]){
            sign = 1;
            //printf("%d\n", sign);
            break;
        }
    }

    if(sign == 0){
        //printf("AAA\n");
        return 1;
    }else if((ar-al+1)%2 == 1){
        //printf("BBB\n");
        return 0;
    }else{
        int amid = (al+ar)/2;
        int bmid = (bl+br)/2;
        if(checksame(a, b, al, amid, bl, bmid) && checksame(a, b, amid+1, ar, bmid+1, br)){
            return 1;
        }else if(checksame(a, b, al, amid, bmid+1, br) && checksame(a, b, amid+1, ar, bl, bmid)){
            return 1;
        }else{
            return 0;
        }
    }
}
