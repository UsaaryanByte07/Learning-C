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

    /* What is a getchar() function?
       If you type abc and press Enter, getchar() will return 'a' on the first call, 'b' on the second, 'c' on the third, and '\n' (newline) on the fourth. */
    char ch1 = getchar();
    printf("%c\n",ch1);
    ch1 = getchar();
    printf("%c\n",ch1);
    while(ch1 != '\n'){
        ch1 = getchar();
        if( ch1 == '\n'){
            break;
        }
        printf("%c\n",ch1);
    }
    char ch2 = getchar();
    while(ch2 != '\n'){
        printf("%c\n",ch2);
        ch2 = getchar();
    }
    return 0;
}