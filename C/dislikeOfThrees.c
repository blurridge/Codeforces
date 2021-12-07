#include <stdio.h>

int numberOutput(int num);

int main(){

    int cases, i, num, answer;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &num);
        answer = numberOutput(num);
        printf("%d\n", answer);
    }
    return 0;
}

int numberOutput(int num){
    
    int answer, i = 1;
    while(num > 0)
    {
        if(i%3 != 0 && i%10 != 3)
        {
            answer = i;
            num--;
        }
        i++;
    }
    
    return answer;
}