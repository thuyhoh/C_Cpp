#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // A pointer that has not been initialized to anything (not even NULL) is known as a wild pointer. 
    // The pointer may be initialized to a non-NULL garbage value that may not be a valid address. 
    int *ptr;
    // trying to access the value pointed by a wild pointer
    // printf("Value pointed by wild pointer: %d\n", *p); -> error 
}
