#include <stdio.h>
#include <math.h>

int a[7];
double finddouble();
double reversedouble();

int main(void)
{
    int e = 1;
    char c;


    while(e <= 6){
        c = getchar();
        if(c == '.')
            continue;
        a[e] = c;
        //printf("%c", a[e]);
        e++;
    }

    printf("%.3lf\n", finddouble()+reversedouble());

    return 0;
}

double finddouble()
{
    double ans = 0;
    double power = 2.0;
    for(int x = 1;x <= 6;x++){
        ans += pow(10.0, power) * (a[x]-'0');
        power--;
    }
    //printf("%lf\n", ans);

    return ans;
}

double reversedouble()
{
    double ans = 0;
    double power = 2.0;
    for(int x = 3;x >= 1;x--){
        //printf("%lf\n", pow(10.0, power));
        ans += pow(10.0, power) * (a[x]-'0');
        power = power - 1.0;
    }
    for(int x = 6;x >= 4;x--){
        //printf("%lf\n", pow(10.0, power));
        ans += pow(10.0, power) * (a[x]-'0');
        power = power - 1.0;
    }
    //printf("%lf\n", ans);

    return ans;
}
