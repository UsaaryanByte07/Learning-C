#include <stdio.h>
#include <string.h>

struct  employee{
    int id;
    float salary;
    char name[100];
};

int main(){
    struct employee e1,e2;
    strcpy(e1.name,"Harry Singh");
    e1.id = 3444;
    e1.salary = 4566.77;
    struct employee *ptr = &e1;
    printf("%s\n",(*ptr).name);
    //or 
    printf("%s\n",ptr->name); //Arrow Operator

    return 0;
}