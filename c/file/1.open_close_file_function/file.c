#include <stdio.h>
#include <stdlib.h>



int main(void){
	char *file_name = "input.txt";
	FILE*f = fopen(file_name,"rt"); // kiểu dữ liệu FILE
	/*
		mở tệp : FILE* fopen(tentep, mode); -> ko mở được trả về con trỏ kiểu NULL
			mode: "wt" "rt" "at" -> ghi mới / đọc / ghi tiếp file tex
				  "wb" "rb" "ab" -> ghi mới / đọc / ghi tiếp file nhị phân
	*/

	fclose(f); // đóng file f
	// fcloseall(); // đóng toàn bộ file được mở
}
