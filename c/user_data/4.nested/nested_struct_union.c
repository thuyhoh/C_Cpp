#include <stdio.h>
#include <stdint.h>

typedef union nested
{
	int val;
	struct 
	{
		int a:16;
		int b:16;
	}str;
	
}nested_typedef;


int main(void){
   nested_typedef ex1;
    
    return 0;
}
