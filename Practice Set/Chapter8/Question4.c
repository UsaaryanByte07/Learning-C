#include <stdio.h>
void slice(char str1[],int start,int end,char str2[]){
      int j =0;
      for(int i = start;i<=end;i++){
        str2[j] = str1[i];
        j++;
      }
      str2[j] ='\0';
}
int main(){
    /* 4. Write a function slice() to slice a string. It should change the original string such 
    that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
    for slice. */
    char name[20] = "Aryan upadhyay";
    char nameSlc[10];
    slice(name,4,9,nameSlc);
    printf("%s",nameSlc);

    return 0;
}