#include <stdio.h>

int main(){
    /* 4. Take name and salary of  given number of employees as input from the user and write them to a text file in the following format: 
       i. Name1, 3300 
       ii. Name2, 7700 */

    FILE *ptr;
    ptr = fopen("Question4.txt","w+");
    if(ptr == NULL){
        printf("Error Occured!!");
    }else{
        int n;
        printf("Enter the Number of Employees data you want to input: ");
        scanf("%d",&n);
        char name[50];
        int salary;
        getchar();
        for(int i = 0;i<n;i++){
            printf("Enter the name of Employee No.%d: ",i+1);
            fgets(name,sizeof(name),stdin);
            int j = 0;
            for(int j = 0; name[j] != '\0'; j++) {
                if(name[j] == '\n') {
                    name[j] = '\0';
                    break;
                }
            }
            printf("Enter the salary of Employee No.%d: ",i+1);
            scanf("%d",&salary);
            getchar();
            fprintf(ptr,"%d. %s, %d\n",i+1,name,salary);
        }
    }
    fclose(ptr);
    return 0;
}