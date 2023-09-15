#include<stdio.h>

void main()
{
    int R,G,B;
    float R1,B1,G1,C,M,Y,W,BLACK;

    printf("Enter First Number  : ");
    scanf("%d",&R);

    printf("Enter Second Number : ");
    scanf("%d",&G);

    printf("Enter Third Number  : ");
    scanf("%d",&B);

    R1=R/255.0;
    G1=G/255.0;
    B1=B/255.0;

    if(R1>B1 && R1>G1){
        W=R1;
    }else if(B1>R1 && B1>G1){
        W=B1;
    }else if(G1>R1 && G1>B1){
        W=G1;
    }

    printf("White : %f",W);

    printf("Cyan : %f ",C=(W-R1)/W);

    printf("Magneta : %f ",M=(W-G1)/W);

    printf("Yellow : %f",Y=(W-B1)/W);

    printf("Black : %f",BLACK=1-W);   
}    