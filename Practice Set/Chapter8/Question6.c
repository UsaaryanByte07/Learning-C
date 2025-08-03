#include <stdio.h>

void count_char(char* str,char ch){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ch){
            count++;
        }
        i++;
    }
    if(count == 0){
        printf("The Given character is not Present in the given String.\n");
    }else{
        printf("The Given Character is Present in the given String.\n");
        printf("The Character %c has Occured %d times in the String %s\n",ch,count,str);
    }
}

int main(){

    /* 6. Write a Program to check whether given character is present in the given string and if yes then how many time it occurs in the given string. */

    char str[100];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);
    char c;
    printf("Enter the Character: ");
    scanf("%c",&c);
    count_char(str,c);
    return 0;
}