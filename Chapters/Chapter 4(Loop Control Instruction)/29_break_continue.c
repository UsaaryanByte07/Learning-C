#include <stdio.h>

int main(){
    for(int i = 0;i<15;i++){
        if(i==8){
            break; //exit the Loop Now!!
        }
        printf("i is %d\n",i);
    }
    for(int i = 0;i<15;i++){
        if(i==8){
            continue; //exit this iteration Now!! the whole loop is not exited only a particular iteration is exited
        }
        printf("i is %d\n",i);
    }
    return 0;
}