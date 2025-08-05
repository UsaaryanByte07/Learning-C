#include <stdio.h>
#include<stdlib.h>

int main(){
    /* `malloc()` and `calloc()` are both used in C to dynamically allocate memory, but they differ in how they operate.
     `malloc(size)` allocates a single block of memory of the specified size in bytes but does not initialize the memory, so it may contain garbage values.
      In contrast, `calloc(num, size)` allocates memory for an array of elements (num × size bytes) and initializes all bytes to zero.
      While `malloc()` is slightly faster, `calloc()` is safer when you need memory initialized to zero.
      Both return a pointer to the allocated memory and `NULL` if the allocation fails.
    */
    
    int n;
    scanf("%d",&n);
    int *ptr1;
    ptr1 = (int*)calloc(n,sizeof(int));
    int *ptr2;
    ptr2 = (int*)malloc(n * sizeof(int));
    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program or handle it safely
    }
    ptr1[0] = 1;
    ptr1[1] = 10;
    ptr2[0] = 9;
    ptr2[1] = 8;

    printf("%d %d %d %d\n",ptr1[0],ptr1[2],ptr2[0],ptr2[2]);
    return 0;
}