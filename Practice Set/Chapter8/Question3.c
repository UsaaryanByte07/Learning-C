#include <stdio.h>
int lengthStr(char str[]){
    int count =0,i=0;
    int ch = 1;
    while(ch != '\0'){
         ch = str[i];
         count++;
         i++;
    }
    return count-1; //Subtracting the Extra Null Character Counted
}
int main(){
    /* 3. Write your own version of strlen function from <string.h> */
    char str[] = "Aryan Upadhyay";
    int len = lengthStr(str);
    printf("%d",len);
    return 0;
}