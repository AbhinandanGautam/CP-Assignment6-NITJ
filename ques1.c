#include<stdio.h>
#include<string.h>

int main(){
    printf("Enter string: ");
    char str[20];
    gets(str);

    // strlen(string) gives length of string
    int n = strlen(str);
    printf("Length of string = %d\n\n",n);

    // strlwr(string) gives string characters in lowercase
    printf("String is: %s",str);    
    printf("\nLowercase String is: %s\n\n",strlwr(str));

    // strupr(string) gives string characters in upercase
    printf("String is: %s",str);    
    printf("\nUppercase String is: %s\n\n",strupr(str));

    // strcpy(destination, source) function copies the source string in destination
    char s[20];
    strcpy(s,str);
    printf("Copy of string is %s\n",s);

    // Copies the first n characters of source to destination
    char S[20];
    strncpy(S,str,5);
    S[5]='\0';
    printf("Copy of string is %s\n\n",S);

    // strcmp() compare two strings
    int val = strcmp(str,s);
    if(val==1){
        printf("%s and %s are same\n\n",str,S);
    }else{
        printf("%s and %s are not same\n\n",str,S);
    }

    // strcmpi()
    char str1[] = "geeks" ;
    char str2[] = "geeks" ;
    int j = strcmpi ( str1, str2 ) ;
    printf ( "The function returns = %d\n\n",j ) ;

    // strchr() function finds the first occurrence of a character in a string
    char c;
    printf("Enter charater: ");
    scanf(" %c",&c);
    printf("First occurance of %c in %d\n\n",c,strchr(str,c)-str+1);

    // strrchr()
    char * pch;
    pch=strrchr(str,'A');
    printf ("Last occurence of 'A' found at %d \n",pch-str+1);

    return 0;
}