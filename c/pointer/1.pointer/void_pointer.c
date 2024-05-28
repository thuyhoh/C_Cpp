#include <stdio.h>

int main(void)
{
    void *ptr;
    // 1.  void pointer can hold an address of any type and can be typecasted to any type.
    int a = 5;
    ptr = & a;
    char b = 'e';
    ptr = &b;
    // 2. void pointers cannot be dereferenced. 
    //printf("%d", *ptr); -> Compiler Error: 'void*' is not a pointer-to-object type
    // The void pointer 'ptr' is cast to an integer pointer
    printf("%d", *(int *)ptr);

    // 2. The C standard doesn’t allow pointer arithmetic with void pointers. 
    // However, in GNU C it is allowed by considering the size of the void as 1.
    
    return 0;
}