#include <stdio.h>
void Gforce(float m){
    printf("force of attraction on a body of mass %.2f kg exerted by earth is %.4f",m,9.8*m);
}
void main(){
    /* 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
    earth. Consider g = 9.8m/s2. */
    
    Gforce(79.33);
}