#include <stdio.h>
 
int main(){
 
    int cases, i, a, b, answer, temp;
    scanf("%d", &cases);
    for(i = 0; i < cases; i++)
    {
        scanf("%d %d", &a, &b);
        if(a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        answer = (a > 2*b) ? a: 2*b;
        printf("%d\n", answer*answer);
    }
    
    return 0;
}