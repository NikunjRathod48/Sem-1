#include <stdio.h>

void main(){

    float Mark,Percentage;

    printf("Please Enter Total Marks : ");
    scanf("%f",&Mark);

    Percentage=Mark*0.2;

    if(Percentage<=35){
        printf("Fail");
    }
    if(Percentage>35 && Percentage<=45){
        printf("Pass Class");
    }
    if(Percentage>45 && Percentage<=60){
        printf("Second Class");
    }
    if(Percentage>60 && Percentage<=70){
        printf("First Class");
    }
    if(Percentage>70){
        printf("Distinction");
    }
}