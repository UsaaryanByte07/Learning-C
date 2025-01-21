#include <stdio.h>
#include <string.h>


void encrypt(char str[],char e[]){
    int i=0;
    while(str[i]!='\0'){
        e[i]=str[i]+1;
        i++;
    }
    e[i] = '\0';
}

void decrypt(char e[],char d[]){
    int i =0;
    while(e[i]!='\0'){
        d[i] = e[i] -1;
        i++;
    }
    d[i] = '\0';
}
int main(){
    /* 6. Write Functions to decrypt and encrypt a given string and display the decrypted string to user if he puts the correct encryption id  */
    char str1[50],en[50],de[50];
    int id,inputid;
    printf("Enter the String: ");
    fgets(str1,sizeof(str1),stdin);

    // Remove the newline character from fgets if present
    size_t len = strlen(str1);
    if (len > 0 && str1[len - 1] == '\n') {
        str1[len - 1] = '\0';
    }

    printf("Enter the Encryption Id: ");
    scanf("%d",&id);

    encrypt(str1,en);

    do{
        printf("Enter the Encryption id to get the Decreypted String: ");
        scanf("%d",&inputid);
        if(inputid==id){
            decrypt(en,de);
            printf("The Decrypted String is %s\n",de);
            printf("The Encrypted String is %s\n",en);
        }else{
            printf("Invalid Encryption Id\n");
            printf("The Encrypted String is %s\n",en);
        }

    }while(inputid!=id);
    return 0;
}