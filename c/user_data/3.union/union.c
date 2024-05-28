#include <stdio.h>
#include <stdint.h>

/* Trong c union giống với tructure ngoại trừ tất cả các thành phần trong union cùng được lưu trữ tại một địa chỉ chung*/
// sizeof(union) = sizeof(phần tử lớn nhất có trong union)
// union được sử dụng để thay thể cho struct nhằm tiết kiệm bộ nhớ

union Ex
{
    uint8_t  a;
    uint16_t b;
};
// sizeof(union Ex) = 2 byte
// a và b cùng được đặt trên một ô nhớ có độ dài là 2 byte 
// khi này thì ta nên truy xuất từng giá trị trên từng thời điểm khác nhau. không nên đồng thời do giá trị của các thành phần có thể bị thay đổi

// có thể sử dụng union lồng nhau hoặc union lồng với struct;

// ưng dụng của union: đóng gói dữ liệu -> quản lý bộ nhớ

int main(void){
    printf("%d\n",sizeof(union Ex));   
    union Ex ex1;
    
    // lỗi có thể sảy ra khi truy xuất
    ex1.a  = 0xAB;
    ex1.b  = 0xEECC;
     
    printf("ex1.a = %#X\n",ex1.a); // CC
    printf("ex1.b = %#X\n",ex1.b); // EECC
    // do ex1.a va ex1.b dung chung bo nho nen khi bat cu gia tri nao thay doi thi gia tri con lai cung thay doi theo

    return 0;
}