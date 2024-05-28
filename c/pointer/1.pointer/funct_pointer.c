#include <stdio.h>

// pointer pointing to function được sử dụng để gọi hàm một cách gián tiếp

int add(int s1, int s2); // khai báo nguyên mẫu một hàm

int add(int s1, int s2)
{
    return s1+s2;
}



int main(void)
{
    // pointer function
    // khai báo con trỏ trỏ tới hàm
/*  syntax: <kiểu_dữ_liệu> (*tên_con_trỏ)(<các_kiểu_dữ_liệu_tham_sỗ>) = <địa_chỉ_của_hàm_con_trỏ_muốn_trỏ_vào>;

*/
    int (*add_fptr)(int , int ) = &add;
    printf("%d", (*add_fptr)(3,5));
}
