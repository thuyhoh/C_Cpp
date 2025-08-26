#include <iostream>
#include <String>

using namespace std;
#define Made true
#define Femade false
class Person{
private:

public:
    Person();
    Person(string name, int age, bool sex, string address);
    ~Person();
    void setName(string name);
    void showName();
    void setAge(int age);
    void showAge();
    void setSex(bool sex);
    void showSex();
    void setAddress(string address);
    void showAddress();
    virtual void showInfor();
protected:
    string Name;
    int Age;
    bool Sex;
    string Address;
};

Person::Person()
{
    cout << "Constructor called" << endl;
}

Person::Person(string name, int age, bool sex, string address) :  Name(name), Age(age), Sex(sex), Address(address)
{
    cout << "Constructor called" << endl;
}

Person::~Person()
{
    cout << "Destructor called" << endl;
}

void Person::setName(string name)
{   
    this->Name = name;
}
void Person::showName()
{
    cout << "Name: " << this->Name << endl;
}
void Person::setAge(int age)
{
    this->Age = age;
}
void Person::showAge()
{
    cout << "Age: " << this->Age << endl; 
}
void Person::setSex(bool sex)
{
    this->Sex = sex;
}
void Person::showSex()
{
    cout << "Sex: " << ((this->Sex) ? "male":"female");
    cout << endl;
}

void Person::setAddress(string address)
{
    this->Address = address;
}
void Person::showAddress()
{
    cout << "Address: " << this->Address;
}
void Person::showInfor()
{
    cout << "Name: " + this->Name + " Age: " << this->Age
        << " Sex: " << ((this->Sex) ? "male":"female")
        << " Address: " << this->Address << endl;
}

class Teacher : public Person 
{
private:
    double Salary;
public:
    Teacher();
    Teacher(string name, int age, bool sex, string address, double salary);
    ~Teacher();
    void setSalary(double salary);
    void showSalary();
    void showInfor() override;
protected:
};
Teacher::Teacher()
{
    cout << "Teacher constructor called" << endl;
}
Teacher::Teacher(string name, int age, bool sex, string address, double salary) : Person(name, age, sex, address)
{
    this->Salary = salary;
    cout << "Teacher constructor called" << endl;
}
Teacher::~Teacher()
{
    cout << "Teacher destructor called" << endl;
}

void Teacher::setSalary(double salary)
{
    this->Salary = salary;
}
void Teacher::showSalary()
{
    cout << "Salary: " << this->Salary << endl;
}

void Teacher::showInfor() 
{
    Person::showInfor();
    cout << " Salary: " << this->Salary << endl;
}

class Student : public Person
{
private:
    double GPA;
public:
    Student();
    Student(string name, int age, bool sex, string address, double gpa);
    ~Student();
    void setGPA(double gpa);
    void showGPA();
    void showInfor() override;
protected:
};

Student::Student()
{
    cout << "Student constructor called" << endl;
}

Student::Student(string name, int age, bool sex, string address, double gpa): Person(name, age, sex, address)
{
    cout << "Student constructor called" << endl;
}

Student::~Student()
{
    cout << "Student destructor called" << endl;
}

void Student::setGPA(double gpa)
{
    this->GPA = gpa;
}

void Student::showGPA()
{
    cout << this->GPA << endl;
}

void Student::showInfor() 
{
    Person::showInfor();
    cout << " GPA: " << this->GPA << endl;
}
// dac diem cua huong doi tuong
// tinh dong goi
// tinh truu tuong hoa
// lop co so lop dan suat
// ke thua public va private
// tu khoa protected
// ke thua da muc

int main(void)
{
    Person *PersonA = new Teacher("thuy", 20, Made, "99 Nguyen Chi Thanh", 658);
    PersonA->showInfor();
    Teacher *TeacherA = new Teacher("dung", 30, Femade, "Hai Duong", 6500);
    TeacherA->showInfor();

    delete PersonA;
    delete TeacherA;
    return 0;
}