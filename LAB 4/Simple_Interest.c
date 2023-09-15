#include<stdio.h>

int main(){
    
    float p,r,t;
    
    printf("Please Enter p : ");
    scanf("%f" ,&p);
    
    printf("Please Enter r: ");
    scanf("%f" ,&r);
    
    printf("Please Enter t : ");
    scanf("%f" ,&t);
    
    printf("Simple Interest : %f" ,p*r*t/100.0);
} 