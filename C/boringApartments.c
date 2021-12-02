#include <stdio.h>

int digitCount(int aptNum);

int main(){

    int cases, i, aptNum, digits;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &aptNum);
        digits = digitCount(aptNum);
        printf("%d\n", digits);
    }
    return 0;
}

int digitCount(int aptNum){

    int lastDigit, answer = 0, i = 1;
    lastDigit = aptNum%10;
    while(aptNum > 0)
    {
        answer+=i;
        i++;
        aptNum/=10;
    }
    answer = (lastDigit > 1) ? answer+=(10*(lastDigit-1)) : answer;
    return answer;
}