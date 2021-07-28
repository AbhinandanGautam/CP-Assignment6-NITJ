#include<stdio.h>
#include<string.h>

void sort(char s[][100],int n)
{
    int min_length=100,index;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                char temp[100];
                strcpy(temp , s[j]);
                strcpy(s[j] , s[i]);
                strcpy(s[i] , temp);
            }
        }
    }
}

int search(char arr[][100],int n,char key[]){
    sort(arr,n);
    for(int i=0;i<n;i++){
        if(strcmp(arr[i],key)==0)
        return i;
    }
    return -1;
}

void input(char arr[][100], int n){
	char (*p)[100] = arr;

	for(int i = 0; i < n; i++){
		scanf(" %[^\n]%*c", p+i);
	}
}

void display(char arr[][100],int n){
    char (*ptr)[100] = arr;

    printf("\nNames of the students are as follows : \n");
	for(int i = 0; i < n; i++){
		printf("%s\n", *(ptr + i));
	}
}

void append(char arr[][100],int n){
    char str[]=" NIT-J";

    for(int i=0;i<n;i++)
    strcat(arr[i],str);
}

int max_length(char arr[][100],int n){
    int length=0;

    for(int i=0;i<n;i++)
    {
        if(length<strlen(arr[i]))
        length=strlen(arr[i]);
    }
    return length;
}

void display_max_length_names(char arr[][100],int n)
{
    int max_len = max_length(arr,n);

    printf("\nNames with max length : \n");
    for(int i=0;i<n;i++)
    {
        if(max_len == strlen(arr[i]))
        printf("%s\n",arr[i]);
    }
}

int main()
{
	char std_name_array[20][100],key[100];
	int n=3;
    printf("Enter the number of Students : ");
    scanf("%i",&n);

    //part 1
    input(std_name_array,n);
    display(std_name_array,n);

    //part 2
    printf("\nEnter the name to be searched : ");
    scanf(" %[^\n]%*c",key);
    int found = search(std_name_array,n,key);

    if(found != -1)
    printf("Name found at index %i after sorting\n",found);

    else
    printf("Name not found\n");

    //part 3
    append(std_name_array,n);
    display(std_name_array,n);
    
    //part 4
    display_max_length_names(std_name_array,n);
}