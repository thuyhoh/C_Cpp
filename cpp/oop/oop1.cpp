#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// lớp được coi là một kiểu đối tượng do người dùng thiết lập
// khai báo và sử dụng giống như các kiểu dữ liệu nguyên thủy

/*  syntax:
    class<class_name>{
        private:
            <kiêu dữ liệu> tên thuộc tính từng lớp;
        public:
            <kiểu dữ liệu> Khai báo các phương thức thuộc tính của đối tượng;
    };
    <định nghĩa các phương thức được khai báo trong lớp>


*/

// ex1: tạo lớp điểm trong Oxy 

class point{
    private:
        float x;
        float y;
    public:
        // phuong thuc thiet lap
        point(){
            this->x = 0;
            this->y = 0;
        }
        point(float xx, float yy){
            this->x = xx;
            this->y = yy;
        }
        // phuong thuc huy bo
        ~point(){}
        // phuong thuc thiet lap sao chep -> uu tien tao khi can sao chep con tro
        point(point&u){
            this->x = u.x;
            this->y = u.y;
        }
        // phuong thuc
        void khoitao(float x = 0, float y = 0);
        void nhap();
        void xuat();
        void DiChuyen(float dx, float dy);
        float dodai(point A);
        float dientichtamgiac(point A, point B);
};

/*  Note:
    - thuộc tính được khai báo giống như biến 
    - các thuộc tính được liệt kê sau từ khóa private và chỉ được sử dụng bởi các phương thức trong lớp đó
    - phương thức được khai báo giống như hàm trong c
    - các phương thức được liệt kê sau từ khóa public có thể được truy cập bởi bất cứ hàm nào trong lớp hoặc ngoài lớp
*/



/* con tro this

*/

void point::khoitao(float x, float y){
    this->x = x;
    this->y = y;
}

void point::nhap(){
    float x,y;
    cin>> x >> y;
    this->x = x;
    this->y = y;
}

void point:: xuat(void){
    cout << "( " << this->x << ", "<< this->y << " )"; 
}

void point::DiChuyen(float dx, float dy){
    this->x += dx;
    this->y += dy;
}

float point::dodai(point A){
    return sqrt(pow((this->x - A.x),2) + pow((this->y - A.y),2));
}

float point::dientichtamgiac(point A, point B){
    
    float a = this->dodai(A);
    float b = B.dodai(*this);
    float c = A.dodai(B);
    float p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(void){

    // phep gan doi tuong 
    point a(0,0);
    point b(3,4);
    a.khoitao(9,4);
    b = a;// doi voi con tro thi can phai xem set lai neu khong se sinh ra loi
    
    // con tro class
    point* p1 = &a;
    p1->xuat();

    point* p2 = new point(2,3);
    p2->xuat();

    return 0;
}
