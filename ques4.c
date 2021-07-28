#include<stdio.h>
#define AREA(r) (3.14*r*r)

int main(){
    float r;
    printf("Enter radius of the circle: ");
    scanf("%f",&r);
    float area = AREA(r);
    printf("Area of circle = %0.2f\n",area);
    return 0;
}