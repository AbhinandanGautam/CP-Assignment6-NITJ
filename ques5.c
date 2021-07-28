#include<stdio.h>
#include<string.h>

void palindrome(char *str){
    int n = strlen(str);
    int flag=1;
    for(int i=0; i<n; i++){
        if(str[i]!=str[n-i-1]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Given string is a palindrome.\n");
    }else{
        printf("Given string is not a palindrome.\n");
    }
}

int main(){
    char str[20];
    printf("Enter String: ");
    scanf(" %s",str);

    palindrome(str);
    return 0;
}