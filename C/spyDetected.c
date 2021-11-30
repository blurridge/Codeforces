#include <stdio.h>
#include <stdlib.h>

int spyDetector(int *numArray, int numElements);

int main(){

    int cases, *numArray, i, numElements, j, indexAns;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &numElements);
        numArray = (int*)malloc(numElements * sizeof(int));
        for(j = 0; j < numElements; j++)
        {
            scanf("%d", &numArray[j]);
        }
        indexAns = spyDetector(numArray, numElements);
        printf("%d\n", indexAns);
    }
    return 0;
}

int spyDetector(int *numArray, int numElements){
    int firstNum, secNum, firstNumCnt = 0, secNumCnt = 0, firstIdx = -1, secIdx = -1, i, index;
    for(i = 0; i < numElements && (firstNumCnt <= 1 || secIdx == -1) && (secNumCnt <= 1 || firstIdx == -1); i++)
    {
        if(i == 0 || firstNum == numArray[i])
        {
            firstNum = numArray[i];
            firstIdx = i;
            firstNumCnt++;
        }
        else if(firstNum != numArray[i])
        {
            secNum = numArray[i];
            secIdx = i;
            secNumCnt++;
        }
    }
    index = (firstNumCnt > secNumCnt) ? secIdx+1 : firstIdx+1;

    return index;
}
