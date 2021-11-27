#include <stdio.h>

long long minMoves(int numElements);

int main(){

    int cases, i, numElements;
    long long result;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &numElements);
        result = minMoves(numElements);
        printf("%lld\n", result);
    }
}

long long minMoves(int numElements){
    long long candies[numElements], oranges[numElements], candyDiff, orangeDiff, candyMin, orangeMin, movesMade = 0; 
    int i;
    for(i = 0; i < numElements; i++)
    {
        scanf("%lld", &candies[i]);
        if(candies[i] < candyMin || i == 0)
            candyMin = candies[i];
    }
    for(i = 0; i < numElements; i++)
    {
        scanf("%lld", &oranges[i]);
        if(oranges[i] < orangeMin || i == 0)
            orangeMin = oranges[i];
    }
    for(i = 0; i < numElements; i++)
    {
        candyDiff = candies[i] - candyMin;
        orangeDiff = oranges[i] - orangeMin;
        movesMade+=((candyDiff > orangeDiff) ? candyDiff : orangeDiff);
    }
    return movesMade;
}