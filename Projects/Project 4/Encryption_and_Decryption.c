#include <stdio.h>

void encrypt(char* str, char* en_str){
   int i = 0;
   while(str[i] != '\0'){
    en_str[i] = str[i] + 12;
    i++;
   }
   en_str[i] = '\0';
   printf("Encrypted Successfully!!\n");
}

void decrypt(char* en_str, char* de_str){
   int i = 0;
   while(en_str[i] != '\0'){
    de_str[i] = en_str[i] - 12;
    i++;
   }
   de_str[i] = '\0';
   printf("Decrypted Successfully!!\n");
}

int main(){
    char str[100],en_str[100],de_str[100];
    int en_id,input_id;
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);
    printf("Set the Encryption Id: ");
    scanf("%d",&en_id);
    encrypt(str,en_str);
    system("cls");
    
    printf("Enter the Encryption id(You have only 5 Attempts): ");
    scanf("%d",&input_id);
    printf("The Encrypted String is: %s\n",en_str);
    int attemptsLeft = 5 ;
    while(input_id != en_id){
        attemptsLeft--;
        if(attemptsLeft == 0){
            break;
        }
        printf("Enter the Encryption id(You have only %d Attempts): ",attemptsLeft);
        scanf("%d",&input_id);
    }
    if( input_id == en_id){
        decrypt(en_str,de_str);
        printf("The String is: %s",de_str);
    }else{
        printf("Sorry Your Attempts are Exhuasted\n");
    }
    return 0;
}