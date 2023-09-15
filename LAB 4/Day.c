#include <stdio.h>

void main(){

    int d,w,y;

    printf("Please Enter Day : ");
    scanf("%d",&d);

   w=d/7;
   d=d%7;
   y=w/52;
   w=w%52;

   printf("Day  : %d\n",y);

   printf("Week : %d\n",w); 

   printf("Year : %d",d);
}