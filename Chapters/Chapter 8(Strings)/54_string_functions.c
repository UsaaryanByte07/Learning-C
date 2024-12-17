#include <stdio.h>
#include <string.h>

int main(){
    //strlen
    char st[] = "harry";
    printf("%d\n",strlen(st));

    //stcpy
    char target[30];
    strcpy(target,st);
    printf("%s\n%s\n",st,target);

    //strcat
    char a1[50] = "Harry ";
    char a2[50] = "Bhai";
    strcat(a1,a2); //a1 is now "Harry Bhai"
    printf("%s\n%s\n",a2,a1);

    //strcmp
    //if 1st string comes before the second string in ASCII then it returns -ve value
    //if 2nd string comes before the 1st string in ASCII then it returns  +ve value
    //if both strings are same then returns 0
    printf("%d\n",strcmp("far","joke")); 
    printf("%d\n",strcmp("far","ajoke"));
    printf("%d\n",strcmp("joke","joke"));
    return 0;
}