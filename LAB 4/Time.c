#include <stdio.h>

void main(){
     int h,m,s;

     printf("Please Enter Seconds : ");
     scanf("%d",&s);

     m=s/60;
     s=s%60;
     h=m/60;
     m=m%60;

     printf("%d",h);
     printf(":");

     printf("%d",m);
     printf(":");

     printf("%d",s);
}