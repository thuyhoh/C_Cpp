# make file là một script bên trong chứa các thông tin 
# 	cấu trúc một project(file, dependency)
# 	các command line dùng để tạo hủy file
# chương trình make sẽ đọc nội dung trong makefile và thực thi nó 
# sử dụng rude: make tên_rude -f tên_makefile 
# chỉ dịnh make file make -f tên_makefile
.PHONY : all clean

all: main.c
	gcc -o app main.c


clean: app.exe
	rm app.exe