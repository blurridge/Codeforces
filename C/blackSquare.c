#include <stdio.h>
#include <string.h>

int main(){

    int calories[5], length, i, sum = 0;
    char s[100000];
    for(i = 1; i <= 4; i++)
        scanf("%d", &calories[i]);
    scanf("%s", s);
    length = strlen(s);
    for(i = 0; i < length; i++)
    {
        int numToAdd = (int) s[i] - 48;
        sum+=calories[numToAdd];
    }
    printf("%d", sum);
    return 0;
}