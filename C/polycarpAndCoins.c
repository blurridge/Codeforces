#include <stdio.h>

int main(){

    int cases, i, num;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &num);
        int secondNum = (num%3 < 2) ? num/3 : (num/3)+1;
        printf("%d %d\n", num-2*secondNum, secondNum);
    }
    return 0;
}