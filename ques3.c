#include<stdio.h>
#include<string.h>

void count(char *str){
    int dig=0,alph=0,sc=0;
    int n = strlen(str);
    for(int i=0; i<n; i++){
        int x = str[i];
        if((x>=65 && x<=90) || (x>=97 && x<=122)){
            alph++;
        }
        else if(x>=48 && x<=57){
            dig++;
        }else{
            sc++;
        }
    }

    printf("No. of alphabets = %d\n",alph);
    printf("No. of digits = %d\n",dig);
    printf("No. of special character = %d\n",sc);
}

int main(){
    char str[20];
    printf("Enter String: ");
    scanf(" %s",str);

    count(str);
    return 0;
}