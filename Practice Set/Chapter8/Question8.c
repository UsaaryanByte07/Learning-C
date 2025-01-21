#include <stdio.h>
#include <string.h>
int compare(char str[],char c){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==c){
            printf("The Character \"%c\" is present in string \"%s\"\n",c,str);
            return 1;
        }
        i++;
    }
        printf("The Character \"%c\" is not present in string \"%s\"\n",c,str);
        return 0;
}
int main(){
    /* 9. Write a program to check whether a given character is present in a string or not. */

    char str[100],c;
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    if(len>0 && str[len-1]=='\n'){
        str[len-1]='\0';
    }

    printf("Enter the Character: ");
    scanf(" %c",&c);

    compare(str,c);
    return 0;
}