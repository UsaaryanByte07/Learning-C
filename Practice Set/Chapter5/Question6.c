#include <stdio.h>
int sumtillN(int n){
    if(n==1){
        return 1;
    }
    return n+sumtillN(n-1);
}
void main(){
    int n;
    printf("Enter value of n(natural number): ");
    scanf("%d",&n);

    int result = sumtillN(n);
    printf("The sum of natural numbers till %d is %d\n",n,result);
}