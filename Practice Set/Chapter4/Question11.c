#include <stdio.h>

int main(){
    /* 11. Implement 10 using other types of loops. */
    int num,i=2,isPrime = 1;
    printf("Enter a Positive Integer : ");
    scanf("%d",&num);

    if(num<=1){
        isPrime = 0;
    } else{
        // while(i<num){
        //     if(num%i==0){
        //         isPrime = 0;
        //         break;
        //     }
        //     i++;
        // }

        do{
            if(num%i==0){
                isPrime = 0;
                break;
            }
            i++;
        }while(i<num);
    }

    if(isPrime){
        printf("The Number %d is a Prime Number\n",num);
    } else{
        printf("The Number %d is not a Prime Number\n",num);
    }
    return 0;
}