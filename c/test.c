#include "stdio.h"
#include "stdint.h"

int main(void)
{
   char *ptr = (char *)0x20000000;
   ptr = ptr+1;
   printf("%#x",ptr);
}
