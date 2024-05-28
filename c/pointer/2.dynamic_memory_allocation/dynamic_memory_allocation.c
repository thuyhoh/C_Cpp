#include <stdio.h>
#include <stdlib.h>

int main(void){
    // function dynamic memory allocatiion
    // (<data_type>*)malloc(sizeof(<element>) * num_element); -> cấp phát một khối bộ nhớ sizeof(<element>) * num_element byte
    // (<data_type>*)calloc(num_element, sizeof(element));    -> cấp phất n phần tử mỗi phần tử có kích thước sizeof(element)
    int *ptr = (int*)calloc(30,sizeof(int));

    // (<data_type>*)realloc(sizeof(<>))
    // free memory
    // free(ptr);
    free(ptr);
    return 0;
}
