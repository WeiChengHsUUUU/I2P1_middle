#include <stdio.h>

long long int V[10001];
long long int buffer[10001];

void merge(int starta, int lena, int startb, int lenb);
void merge_sort(int left, int right);

int main(void)
{
    int T;
    int n;

    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int x = 0;x < n;x++){
            scanf("%lld", &V[x]);
        }
        merge_sort(0, n-1);

        for(int x = 0;x < n-1;x++){
            printf("%lld ", V[x]);
        }
        printf("%lld\n", V[n-1]);
    }

    return 0;
}

void merge(int starta, int lena, int startb, int lenb)
{
    int i = 0, j = 0, k = 0;
    while(i < lena && j < lenb){
        if(V[starta+i] < V[startb+j]){
            buffer[k++] = V[starta+i++];
        }else{
            buffer[k++] = V[startb+j++];
        }
    }
    while(i < lena){
        buffer[k++] = V[starta+i++];
    }
    while(j < lenb){
        buffer[k++] = V[startb+j++];
    }
}

void merge_sort(int left, int right)
{
    int mid;
    if(left >= right)
        return;
    mid = left + (right-left)/2;
    merge_sort(left, mid);
    merge_sort(mid+1, right);
    merge(left, mid-left+1, mid+1, right-mid);
    for(int i = 0;i < right-left+1;i++)
        V[left+i] = buffer[i];
}
