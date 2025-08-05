#include <stdio.h>
#include <stdlib.h>

int main(){
    /* The realloc() function in C is used to resize previously allocated memory without losing its existing data.
       It allows you to expand or shrink a memory block that was allocated using malloc(), calloc(), or realloc() itself.
       When you call realloc(ptr, new_size), it tries to resize the memory pointed to by ptr to the new size specified.
       If there is enough space to expand in place, it does so; otherwise, it allocates a new block, copies the old data, and frees the old block.
       If the function fails to allocate memory, it returns NULL, so the original pointer should not be overwritten until you check the result.
       This makes realloc() useful in situations like dynamically growing arrays where the required memory size isn't known in advance. */
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program or handle it safely
    }
    ptr[0] = 1;
    ptr[1] = 10;
    scanf("%d",&n);
    ptr = (int*)realloc(ptr, n*sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program or handle it safely
    }
    printf("%d %d\n",ptr[0],ptr[3]);
    return 0;
}