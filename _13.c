#include <stdio.h>

void tobinery(int C);

int main(void)
{
    int A, B;
    scanf("%x%x", &A, &B);

    tobinery(A+B);
    printf("\n");

    return 0;
}

void tobinery(int C)
{
    if(C != 0){
        tobinery(C/2);
        printf("%d", C%2);
    }
}
