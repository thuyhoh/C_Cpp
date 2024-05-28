#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t Data1 = 10;
    uint8_t const Data2 = 100;
    Data1 = (uint8_t)999;
    // Data2 = 1006; ->errol
    
    uint8_t *ptr = (uint8_t*)&Data2;
    *ptr = 100;// cos thể thay đổi giá trị của biến cục bộ thông qua con trỏ
    


    return 0;
}