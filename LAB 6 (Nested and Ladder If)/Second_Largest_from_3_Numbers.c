#include <stdio.h>

void main(){

    int a,b,c;

    printf("Please Enter First Number  :");
    scanf("%d",&a);

    printf("Please Enter Second Number :");
    scanf("%d",&b);

    printf("Please Enter Third Number  :");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            if(b>c){
                printf("%d is Second Largest",b);
            }else{
                printf("%d is Second Largest",c);
            }
        }
        else{
            printf("%d is Second Largest",a);
        }
    }
    else{
        if(a>c){
            printf("%d is Second Largest",a);
        }else{
            if(b>c){
                printf("%d is Second Largest",c);
            }
            else{
                printf("%d is Second Largest",b);
            }
        }
    }
}