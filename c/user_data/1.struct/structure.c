#include <stdio.h>
#include <stdlib.h>

struct ex1{
    short   x;
    int     y;
    double  z;
};

typedef struct ex1 Ex1;

int main(){

    printf("%d",sizeof(struct ex1));// sizeof(struct);
    
    struct ex1 var1;
//  accessing into var_struct 
    var1.x = 100;
    var1.y = 5;
    var1.z = 9861.9661;

    Ex1 *ptr = (Ex1*)malloc(sizeof(Ex1));
//  accessing into pointer_struct 
    ptr->x = 56;
    ptr->y = 97;
    ptr->z = 2516.0005;
    
    printf("var1\n");
    printf("x = %d\n",var1.x);
    printf("y = %d\n",var1.y);
    printf("z = %lf\n",var1.x);

    printf("ptr\n");
    printf("x = %d\n",ptr->x);
    printf("y = %d\n",ptr->y);
    printf("z = %lf\n",ptr->z);

    
    return 0;
}