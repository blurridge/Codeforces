#include <stdio.h>

int main(){

    int cases, i;
    long long num;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%lld", &num);
        long long answer = (num%2 == 0) ? num/2 : num/2 + 1;
        printf("%lld\n", answer);
    }
    return 0;
}