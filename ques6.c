#include<stdio.h>

#define MINI2(a,b) (a<b?a:b) 
#define MAXI2(a,b) (a>b?a:b) 
#define MINI3(a,b,c) (MINI2(MINI2(a,b),c))
#define MAXI3(a,b,c) (MAXI2(MAXI2(a,b),c))

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int temp;
    temp = MINI3(a,b,c);
    printf("Shortest number entered is %d\n",temp);
    temp = MAXI3(a,b,c);
    printf("Largest number entered is %d\n",temp);

    return 0;
}
