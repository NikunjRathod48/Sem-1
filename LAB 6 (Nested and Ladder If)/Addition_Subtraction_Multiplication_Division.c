#include <stdio.h>

void main(){

    int a,b;
    char ch;

    printf("Please Enter First Number  : ");
    scanf("%d",&a);

    printf("Please Enter Second Number : ");
    scanf("%d",&b);

    printf("Enter choice   + for Addition,- for Subtraction,* for Multiplication,/ for Division");
    scanf(" %c",&ch);

    if(ch=='+'){
        printf("Addition : %d",a+b);
    }
    if(ch=='-'){
        printf("Subtraction : %d",a-b);
    }
    if(ch=='*'){
        printf("Multiplication : %d",a*b);
    }
    if(ch=='/'){
        printf("Division : %d",a/b);
    }
}