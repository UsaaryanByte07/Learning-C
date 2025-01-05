#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name[100];
};

void display1(struct employee e){
    printf("%d %.4f %s",e.id,e.salary,e.name);
}

void change(struct employee *e){
    e->id = 220; //or (*e).name = 220;
}

int main(){
    struct employee e1,e2;
    strcpy(e1.name,"Harry");
    e1.id = 2007;
    e1.salary = 34000;
    
    change(&e1);
    display1(e1);
    return 0;
}