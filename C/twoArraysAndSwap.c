#include <stdio.h>
#include <stdlib.h>

int *arraySort(int elementNum);

int main(){

    int cases, i, j, *aArray, *bArray;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        int elementNum, maxMoves, aMin, k = 0, sum = 0;
        scanf("%d %d", &elementNum, &maxMoves);
        aArray = arraySort(elementNum);
        bArray = arraySort(elementNum);
        aMin = *aArray;
        for(j = elementNum - 1; j >= 0 && maxMoves > 0; j--, maxMoves--)
        {
            if(*(bArray + j) > aMin)
            {
                *(aArray + k) = *(bArray + j);
                k++;
                aMin = *(aArray + k);
            }
        }
        for(j = 0; j < elementNum; j++)
            sum+=*(aArray + j);
        printf("%d\n", sum);
    }
    return 0;
}

int *arraySort(int elementNum){
    
    int *numArr = (int*)malloc(elementNum * sizeof(int)), i, j, temp;
    for(i = 0; i < elementNum; i++)
        scanf("%d", numArr + i);
    for(i = 0; i < elementNum; i++)
    {
        for(j = i+1; j < elementNum; j++)
        {
            if(*(numArr+i) > *(numArr + j))
            {
                temp = *(numArr+i);
                *(numArr+i) = *(numArr + j);
                *(numArr + j) = temp;
            }
        }
    }
    return numArr;
}