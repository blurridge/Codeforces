#include <stdio.h>
#include <stdlib.h>

int minDiff(int athNum);

int main(){

    int cases, i, athNum, diff;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &athNum);
        diff = minDiff(athNum);
        printf("%d\n", diff);
    }
    return 0;
}

int minDiff(int athNum){

    int numArr[athNum], i, j, minDiff, currentDiff;
    for(i = 0; i < athNum; i++)
        scanf("%d", &numArr[i]);
    for(i = 0; i < athNum; i++)
    {
        for(j = i+1; j < athNum; j++)
        {
            currentDiff = abs(numArr[i] - numArr[j]);
            if((i == 0 && j == 1) || currentDiff < minDiff)
                minDiff = currentDiff;
        }
    }
    return minDiff;
}