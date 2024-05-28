#include <stdio.h>


int *ex1()
{
    int x = 5; // This can be solved by declaring the variable x as a static variable : static int x = 5;
    return &x;
}


int main(void)
{
    // 1. De-allocation of Memory
    int* ptr = (int*)malloc(sizeof(int));
    free(ptr); // -> ptr become a dangling_pointer
    printf("%d", *ptr);

    // 2. Function Call 
    // When the local variable is not static and the function returns a pointer to that local variable.
    //  The pointer pointing to the local variable becomes dangling pointer.
    ptr = ex1();
    printf("%d", *ptr);
    
    // 3. Variable Goes Out of Scope
    // creating block
    {
        int a = 10;
        ptr = &a;
    }
    printf("\n%d", *ptr);
    return 0;
}