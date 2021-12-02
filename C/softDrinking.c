#include <stdio.h>

int main(){

    int answer, numPeople, numBottles, amountDrink, numLimes, numSlices, numSalt, needAmt, needSalt, drinksAvail, slicesAvail, saltAvail;
    scanf("%d %d %d %d %d %d %d %d", &numPeople, &numBottles, &amountDrink, &numLimes, &numSlices, &numSalt, &needAmt, &needSalt);
    drinksAvail = (amountDrink*numBottles)/needAmt;
    slicesAvail = numLimes*numSlices;
    saltAvail = numSalt/needSalt;
    answer = (drinksAvail < slicesAvail && drinksAvail < saltAvail) ? drinksAvail/numPeople : (slicesAvail < drinksAvail && slicesAvail < saltAvail) ? slicesAvail/numPeople : saltAvail/numPeople;
    printf("%d", answer);
    return 0;
}