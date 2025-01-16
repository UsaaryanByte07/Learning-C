#include <stdio.h>
/*  Star Patterns:
   1)Right angnle triangle(Left aligned)
   2)Right angnle triangle(Right aligned)
   3)Inverted Right Angle triangle(Left aligned)
   4)Inverted Right Angle triangle(Right aligned)
   5)Pyramid
   6)Inverted Pyramid
   7)Diamond
*/
int main(){
    int n;
    printf("Enter the Number of rows: ");
    scanf("%d",&n);

    while(n<=0){
         printf("Enter Valid Input(natural Numbers): ");
         scanf("%d",&n);
    }

    printf("Right Angle Triangle(left Aligned):\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Right Angle Triangle(Right Aligned):\n");
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Inverted Right Angle triangle(left Aligned):\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Inverted Right Angle triangle(Right Aligned):\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k =0;k<n-i;k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Pyramid:\n");
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<((2*i)+1);k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Inverted Pyramid:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<((2*(n-i))-1);k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Diamond:\n");
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<((2*i)+1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<((2*(n-i))-1);k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}