#include <stdio.h>
#include <stdio.h>

void main(){

    int a,b,c;

    printf("Please Enter First Side Value : ");
    scanf("%d",&a);

    printf("Please Enter Second Side Value : ");
    scanf("%d",&b);

    printf("Please Enter Third Side Value : ");
    scanf("%d",&c);

    if(a==b||b==c||a==c){
        printf("Triangle is Isosceles\n");
    }
    if(a==b==c){
        printf("Triangle is Equilateral\n");
    }
    if((a*a)+(b*b)==c*c||(a*a)+(c*c)==b*b||(b*b)+(c*c)==a*a){
        printf("Triangle is Right Angled Triangle\n");
    }
    if(a!=b!=c){
        printf("Triangle is Scalene");
    }
}