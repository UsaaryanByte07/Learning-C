#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the length of each table: ");
    scanf("%d",&n);
    printf("Enter the number of Tables you want: ");
    scanf("%d",&m);
    int table[n][m];
    for(int i=0;i<m;i++){
        int j;
        printf("Enter the Number of Table %d: ",i+1);
        scanf("%d",&j);
        for(int p =0;p<n;p++){
            int k;
            k =(p+1)*j;
            table[p][i] = k;
        }
    }
    
    printf("Generated Table: \n");
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
    return 0;
}