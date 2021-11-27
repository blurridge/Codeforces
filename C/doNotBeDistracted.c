#include <stdio.h>
#include <stdlib.h>

char *distractionCheck(char *taskOrder, int days);

int main(){

    int cases, i, days;
    char *checkResult;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &days);
        char *taskOrder = (char*)malloc(days * sizeof(char));
        scanf("%s", taskOrder);
        checkResult = distractionCheck(taskOrder, days);
        printf("%s\n", checkResult);
    }
}

char *distractionCheck(char *taskOrder, int days){
    int letterDic[27] = { 0 }, i, flag = 0;
    char *answer;
    for(i = 0; i < days; i++)
    {
        if(i == 0)
            letterDic[taskOrder[i] - 65]++;
        else if(taskOrder[i] != taskOrder[i - 1] && letterDic[taskOrder[i] - 65] == 0)
        {
            letterDic[taskOrder[i] - 65]++;
            flag = 0;
        }
        else if(taskOrder[i] != taskOrder[i - 1] && letterDic[taskOrder[i] - 65] > 0)
        {
            flag = 1;
            break;
        }
    }
    answer = (flag == 1) ? strdup("NO") : strdup("YES");
    return answer;
}