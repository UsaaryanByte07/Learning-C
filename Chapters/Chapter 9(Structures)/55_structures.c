#include <stdio.h>
#include <string.h>
/* A sturture is Collection of variables of different datatypes under a single name */
struct employee{
    float salary;
    char name[50];
    int id;
};
int main(){
    struct employee e1,e2;
    strcpy(e1.name,"Harry"); //This is wrong e1.name = "harry";
    e1.salary = 30000;
    e1.id = 576024;
    printf("The Salary of Employee named %s and id %d is %.4f\n",e1.name,e1.id,e1.salary);
    return 0;
}