#include <stdio.h>
#include <string.h>

struct emp{
    char name[100];
    int id;
    float salary;
};

int main(){
    struct emp employees[3];
    for(int i = 0;i<3;i++){
        printf("Enter the Employee No.%d name: ",i+1);
        fgets(employees[i].name,100,stdin);

        int len = strlen(employees[i].name);
        printf("Enter the Employee No.%d id: ",i+1);
        scanf("%d",&employees[i].id);
        printf("Enter the Salary of Employee No.%d: ",i+1);
        scanf("%f",&employees[i].salary);

        while (getchar() != '\n');
    }

    for(int i=0;i<3;i++){
        printf("The Salary of Employee Named %s and id %d is %.2f\n",employees[i].name,employees[i].id,employees[i].salary);
    }
    return 0;
}