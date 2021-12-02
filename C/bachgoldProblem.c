#include <stdio.h>

int main(){

    long numInput;
    int i;
    scanf("%ld", &numInput);
    printf("%ld\n", numInput/2);
    if(numInput % 2 == 0)
    {
        for(i = 1; i <= numInput/2; i++)
        {
            printf("2 ");
        }
    }
    else
    {
        for(i = 1; i < numInput/2; i++)
        {
            printf("2 ");
        }
        printf("3");
    }
    return 0;
}