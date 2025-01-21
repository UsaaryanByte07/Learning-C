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

    /* In C, when you pass an array to a function, what actually gets passed is the pointer to the first element of the array, not a copy of the array itself. This means:

    Inside the function, the array parameter (char str2[]) is essentially treated as a pointer to the original array (nameSlc in this case).
    Any modifications made to the array inside the function affect the original array, because both the function and the calling code are working with the same memory location.
    This is different from passing a basic data type (like int, float, etc.), where only a copy of the value is passed. */
    return 0;
}