#include <stdio.h>

void main(){

    float Unit,Bill;

    printf("Please Enter a Unit : ");
    scanf("%f",&Unit);

    if(Unit<=50){
        Bill=Unit*0.5;
    }
    if(Unit>51 && Unit<=150){
        Bill=(Unit-50)*0.75+25;
    }
    if(Unit>151 && Unit<=250){
        Bill=(Unit-150)*1.2+100;
    }
    if(Unit>250){
        Bill=(Unit-250)*1.5+220;
    }
    printf("%f is your Bill",Bill=Bill*1.2);
}