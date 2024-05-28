#include <stdio.h>


/*  Macros: #define <identifier> <value> 
  // used for textual replancement
    file inclusion: #include <std lib file name> / #include "user defined file name "
  // used for include file
    conditional compilation: #if / #else / #endif / #ifdef / #else / #indef / #undef
  // used to direct the compiler about code compilation
    other: #error / #pragma
*/

// Macro:
// Macro_value
#define PI 3.1415f // f: float
// Macro_function(oneline function)
#define AREA_OF_CIRCLE1(r) PI*r*r      //
#define AREA_OF_CIRCLE2(r) (PI)*(r)*(r)


#define MACRO 100
#undef MACRO   // xóa MACRO


int main(void){
    int check = 1;

    if(check == 0){
        #define APPLY
    }

    #ifndef MACRO // nếu Macro bị undefine -> thực thi
        printf("MACRO da bi xoa");
    #endif 

    #ifdef APPLY // nếu Macro được define -> thực thi 
        printf("AREA_OF_CIRCLE1(10+1) = %f\n",AREA_OF_CIRCLE1(10+1)); // PI * 10 + 1*10 + 1
        printf("AREA_OF_CIRCLE1(11) = %f\n",AREA_OF_CIRCLE1(11));     // PI * 11 * 11
        printf("AREA_OF_CIRCLE2(10+1) = %f\n",AREA_OF_CIRCLE2(10+1)); // PI * (10+1) * (10+1)
    #else
        printf("sai");
    #endif
    
    
    return 0;

}
