#include <stdio.h>

/* Quick Quiz: Write a program with three functions 
1. Good morning function which prints “good morning”. 
2. Good afternoon function which prints “good afternoon”. 
3. Good night function which prints “good night”.  
main() should call all of these in order 1→2→3 */
void goodMorning(){
    printf("Good Morning!!\n");
}
void goodAfternoon(){
    printf("Good Afternoon!!\n");
}
void goodNight(){
    printf("Good Night!!\n");
}
int main(){
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}