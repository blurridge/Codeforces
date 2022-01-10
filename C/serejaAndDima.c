#include <stdio.h>
#include <stdlib.h>

void getPlayerPoints(int *cardValues, int *sePoints, int *diPoints, int cases);

int main(){

    int cases, i, sePoints = 0, diPoints = 0;
    scanf("%d", &cases);
    int *cardValues = (int*)malloc(cases * sizeof(int));
    for(i = 0; i < cases; i++)
    {
        scanf("%d", &cardValues[i]);
    }
    getPlayerPoints(cardValues, &sePoints, &diPoints, cases);
    printf("%d %d", sePoints, diPoints);
    return 0;
}

void getPlayerPoints(int *cardValues, int *sePoints, int *diPoints, int cases){
    int i = 0, count = 0, lowestValue;
    cases--;
    do{
        if(count%2 == 0)
        {
            if(cardValues[cases] >= cardValues[i])
            {
                *sePoints+=cardValues[cases];
                cases--;
            }                
            else
            {
                *sePoints+=cardValues[i];
                i++;
            }
        }
        else
        {
            if(cardValues[cases] >= cardValues[i])
            {
                *diPoints+=cardValues[cases];
                cases--;
            }                
            else
            {
                *diPoints+=cardValues[i];
                i++;
            }
        }
    count++;
    }while(i != cases++);
}