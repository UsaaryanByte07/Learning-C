#include <stdio.h>

int main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf(age<=0? "Age is Invalid":(age>0 && age<18)? "You Can't Drive":"You can Drive");
    return 0;
}
