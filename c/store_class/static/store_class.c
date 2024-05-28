#include <stdio.h>
#include "file1.c"
int mainvar;
void file1fuct1(void);
void myFunc1(void){
    int static cnt = 0;
    cnt = cnt + 1;
    printf("%d la gia tri cua cnt \n",cnt);
}

int main(void){
    mainvar = 100;
    printf("%d is value of mainvar");
    return 0;
}