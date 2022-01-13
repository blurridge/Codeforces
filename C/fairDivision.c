#include <stdio.h>

int main(){
    int cases, i, j, numElements, currentNum;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &numElements);
        int numDic[3] = { 0 };
        for(j = 0; j < numElements; j++)
        {
            scanf("%d", &currentNum);
            numDic[currentNum]++;
        }
        int weight = numDic[1] + (numDic[2]*2);
        if(weight%2 == 0)
        {
            if(numDic[2]%2 != 0 && numDic[1]%2 == 0 && numDic[1] > 0)
                printf("YES\n");
            else if(numDic[1]%2 == 0 && numDic[2]%2 == 0)
                printf("YES\n");
            else if(numDic[2]%2 != 0 && numDic[1] == 0)
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}