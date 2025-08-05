#include <stdio.h>
#include <stdlib.h>

int main(){
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
    free(ptr1);
    free(ptr2);
    printf("%d %d %d %d\n",ptr1[0],ptr1[2],ptr2[0],ptr2[2]);

    /* AFTER free() – Why are some values still readable?
       Calling free() only marks the memory as available — it does NOT erase the data or make the pointer NULL.
       So technically:
       Accessing ptr1[0] or ptr2[0] after free() is undefined behavior.
       That means:Sometimes you may get the old values (1, 0, 9, etc.)
                  Sometimes you may get garbage
                  Sometimes it may crash
        But it’s never safe or guaranteed what you'll get. */
    return 0;
}