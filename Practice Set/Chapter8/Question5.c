#include <stdio.h>
void strcopy(char str1[],char str2[]){
    int i =0;
    while(str2[i] != '\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
}
int main(){
    /* 5. Write your own version of strcpy function from <string.h> */
    char name1[20];
    char name2[20] = "aryan usa";
    strcopy(name1,name2);
    printf("%s",name1);
    return 0;
}