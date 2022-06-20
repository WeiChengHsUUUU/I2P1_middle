#include <stdio.h>

void place(int row, int a);
int able(int a, int i);

int board[15] = {0};
int countit = 0;

int main(void)
{
    int row;
    scanf("%d", &row);
    place(row, 1);
    printf("%d\n", countit);

    return 0;
}

void place(int row, int a)
{
    int i;
    if(row < a){
        countit++;
    }else{
        for(i = 1;i <= row;i++){
            if(able(a, i)){
                board[a] = i;
                place(row, a+1);
            }
        }
    }
}

int able(int a, int i)
{
    for(int j = 1;j < a;j++){
        if(board[j] == i || board[a-j] == i+j || board[a-j] == i-j)
            return 0;
    }
    return 1;
}
