#include <stdio.h>
#include <math.h>

void main() {
    
    float a, b, c, D, Root1, Root2, RealPart, ImagPart;
    
    printf("Please Enter First Co-efficient  : ");
    scanf("%f",&a);

    printf("Please Enter Second Co-efficient : ");
    scanf("%f",&b);

    printf("Plaese Enter Constant : ");
    scanf("%f",&c);

    D = b * b - 4 * a * c;
 
    if (D > 0) {
        Root1 = (-b + sqrt(D)) / (2 * a);
        Root2 = (-b - sqrt(D)) / (2 * a);
        printf("Root1 = %f and Root2 = %f", Root1, Root2);
    }
    else{

     if (D == 0) {
        Root1 = Root2 = -b / (2 * a);
        printf("root1 = root2 = %f;", Root1);
    }    
    else {
        RealPart = -b / (2 * a);
        ImagPart = sqrt(-D) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", RealPart, ImagPart, RealPart, ImagPart);
    }
    }
} 