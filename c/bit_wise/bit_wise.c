#include "stdio.h"

int main(void)
{
    int a = 0x1E; // 0b0001_1111
    int b = 0x5;  // 0b0000_0101

    // Not          (operator : ! )
/*      !   A   =
            0   1
           !0   0
*/
    printf("!0 = %#x vs !%#x = %#x\n", !0, a, !(a));

    // revers      (operator : ~ )
/*      ~   A   =
            0   1
            1   0
*/
    printf("~ %#x = %#x\n",a,~a);
    // And         (operator : & )
/*      A   &   B     =  
        0       0     0
        1       0     0
        0       1     0
        1       1     1
*/
    printf("%#x & %#x = %#x\n",a,b,(a&b));
    // Or          (operator : | )
/*      A   |   B     =  
        0       0     0
        1       0     1
        0       1     1
        1       1     1
*/    
    printf("%#x | %#x = %#x\n",a,b,(a|b));
    // Xor         (operator : ^ )
/*      A^B = (~A)&(B) | (A)&(~B) 
        A   ^   B     =  
        0       0     0
        1       0     1
        0       1     1
        1       1     0
*/
    printf("%#x ^ %#x = %#x\n",a,b,(a^b));
    // shift left  (operator : << )
    printf("%#x << 3 = %#x",1,1<<3);
    // shift right (operator : >> ) 
    printf("%#x >> 3 = %#x",1,1>>3);
    
}
