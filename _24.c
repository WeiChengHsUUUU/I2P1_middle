#include <stdio.h>

int paper[26];

int place(int num);
int bingo(int bing[26], int N);

int main(void)
{
    int T, N;

    for(int i = 1;i <= 25;i++){
        scanf("%d", &paper[i]);
        //printf("%d ", paper[i]);
    }
    scanf("%d", &T);
    for(int i = 1;i <= T;i++){//T testcase
        int circle[26];
        int bing[26] = {0};

        scanf("%d", &N);
        for(int j = 1;j <= N;j++)
            scanf("%d", &circle[j]);
        for(int j = 1;j <= N;j++){//N number
            bing[place(circle[j])] = 1;
            if(bingo(bing, N)){
                printf("Case #%d: %d\n", i, j);
                break;
            }

        }
        if(bingo(bing, N))
            printf("Case #%d: Not yet \\(^o^)/\n", i);
    }//T testcase

    return 0;
}

int place(int num)
{
    for(int i = 1;i <= 25;i++){
        if(paper[i] == num)
            return i;
    }
}

int bingo(int bing[26], int N){
    if(N < 5)
        return 0;
    for(int i = 0;i < 5;i++){
        int count = 0;
        for(int j = 0;j < 5;j++){//row bingo
            if(bing[5*i+j+1] == 1){
                count++;
            }
        }
        if(count == 5){
            return 1;
        }
        //---------------------------------
        int count1 = 0;
        for(int j = 0;j < 5;j++){//column bingo
            if(bing[i+5*j+1] == 1){
                count1++;
            }
    	}
        if(count1 == 5){
            return 1;
        }
    }


    int count2 = 0;//左上右下bingo
    for(int i = 0;i < 5;i++){
        if(bing[6*i+1] == 1){
            count2++;
        }
    }
    if(count2 == 5){
        return 1;
    }
    //--------------------------------------------
    int count3 = 0;//右上左下bingo
    for(int i = 1;i <= 5;i++){
        if(bing[4*i+1] == 1){
            count3++;
        }
    }
    if(count3 == 5){
        return 1;
    }//全部都沒有則return 0
    return 0;

}
