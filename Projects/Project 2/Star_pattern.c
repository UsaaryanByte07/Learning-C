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

void right_angled_LF(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void right_angled_RF(int n){
    for(int i = 0; i < n; i++){
        for(int j = n - 1 ; j>i; j--){
            printf(" ");
        }
        for(int k = 0 ; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
}

void inverted_right_angled_LF(int n){
    for(int i = 0; i < n; i++){
        for(int j = n ; j>i; j--){
            printf("*");
        }
        printf("\n");
    }
}

void inverted_right_angled_RF(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j<i; j++){
            printf(" ");
        }
        for(int k = n ; k>i; k--){
            printf("*");
        }
        printf("\n");
    }
}

void pyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = n - 1 ; j>i; j--){
            printf(" ");
        }
        for(int k = 0 ; k<(2*i + 1); k++){
            printf("*");
        }
        printf("\n");
    }
}

void inverted_pyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j<i; j++){
            printf(" ");
        }
        for(int k = (2*n - 1 ) ; k>=(2*i + 1); k--){
            printf("*");
        }
        printf("\n");
    }
}

void Diamond(int n){
    for(int i = 0; i < n; i++){
        for(int j = n - 1 ; j>i; j--){
            printf(" ");
        }
        for(int k = 0 ; k<(2*i + 1); k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < (n-1); i++){
        for(int j = 0; j<=i; j++){
            printf(" ");
        }
        for(int k = (2*(n-1) - 1 ) ; k>=(2*i + 1); k--){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the no. of rows for star pattern: ");
    scanf("%d", &n);
    printf("Right Angle triangle(Left Aligned):\n");
    right_angled_LF(n);
    printf("\n");
    printf("Right Angle triangle(Right Aligned):\n");
    right_angled_RF(n);
    printf("\n");
    printf("Inverted Right Angle triangle(Left Aligned):\n");
    inverted_right_angled_LF(n);
    printf("\n");
    printf("Inverted Right Angle triangle(Right Aligned):\n");
    inverted_right_angled_RF(n);
    printf("\n");
    printf("Pyramid:\n");
    pyramid(n);
    printf("\n");
    printf("Inverted Pyramid:\n");
    inverted_pyramid(n);
    printf("\n");
    printf("Diamond:\n");
    Diamond(n);
    printf("\n");
}