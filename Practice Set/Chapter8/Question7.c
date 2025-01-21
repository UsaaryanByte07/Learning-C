#include <stdio.h>
#include <string.h>

int countstr(char str[],char c){
    int count=0,i=0;
    while(str[i]!='\0'){
        if(str[i]==c){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    /* 7. Write a program to count the occurrence of a given character in a string. */

    char str[100],c;
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Enter the Character whose occurence to count: ");
    scanf(" %c",&c);
    int count = countstr(str,c);
    printf("\"%c\" appears in the string \"%s\" %d times",c,str,count);
    return 0;
}