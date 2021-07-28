#include <stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter Size of String: ");
    scanf("%d",&n);
    char ch;
    printf("Enter Character: ");
    scanf(" %c",&ch);
    char str[n];
    printf("Enter String: ");
    scanf(" %[^\n]%*c",str);

    int lastoc=-1;
    for(int i=0; i<n; i++){
        if(str[i]==ch){
            lastoc = i;
        }
    }

    if(lastoc==-1){
        printf("Element is not present in string.\n");
    }else{
        printf("Last occurance of element is at index %d\n",lastoc);
    }

    return 0;
}
