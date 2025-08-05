#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program or handle it safely
    }

    /* you should always check if malloc returns NULL, especially in larger or real-world programs.
       If the system fails to allocate memory (e.g., not enough RAM), malloc returns NULL.
       Using that NULL pointer without checking (like ptr[0] = 10;) causes a segmentation fault or crash. */

    ptr[0] = 10;
    ptr[1] = 12;
    printf("%d\n",ptr[0]);

    /* The line ptr = (int*)malloc(n * sizeof(int)); dynamically allocates memory for n integers in the heap.
       malloc(n * sizeof(int)) calculates the total bytes needed and returns the base address of the allocated block (as a void*).
       The (int*) typecasts it to an int*, so ptr can point to and access integers like an array.
       So, ptr stores the starting memory address of the allocated block, i.e., it returns the address of the first allocated integer slot. */
    return 0;
}