#include <stdio.h>

void main(){

    int a;

    printf("Please Enter Number : ");
    scanf("%d",&a);

    if((a&1)==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
}