#include <stdio.h>

int a[12];
int bittofx = 1;

int main(void)
{
    int x;

    scanf("%d", &x);
    to_binery(x);
    adding();

    return 0;
}

void to_binery(int x)
{
    int r = 1;
    while(r <= x){
        r = r*2;
    }
    if(r != 1){
        r = r/2;
    }


    while(r >= 1){
        if(x >= r){
            a[bittofx] = 1;
            x = x-r;
        }else{
            a[bittofx] = 0;
        }
        bittofx++;
        r = r/2;
    }
}

void adding()
{
    int carry = 1;
    int carry_count = 0;
    int bitofx = bittofx-1;

    for(;bitofx >= 0;bitofx--){
        if(a[bitofx] + carry == 1){
            a[bitofx] = 1;
            carry = 0;
        }else if(a[bitofx] + carry == 0){

        }else{
            a[bitofx] = 0;
            carry = 1;
            carry_count++;
        }
    }

    if(a[0] == 1){
        printf("1");
    }

     for(int f = 1;f <= bittofx-1;f++){
        printf("%d", a[f]);
     }
     printf(" ");
     printf("%d\n", carry_count);
}
