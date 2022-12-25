#include<iostream>
using namespace std;

class student{
    private:
    string studentname;
    int studentRollNo;
    int studentAge;

    public:
    string getstudentName(){
        return studentname;
    }

    void setStudentName(string studentname){
        this ->studentname=studentname;
    }

    int getRollNo(){
        return studentRollNo;
    }
    void setStudentRollNo(int studentRollNo){
        this-> studentRollNo=studentRollNo;
    }

    int getStudentAge(){
        return studentAge;
    }
    void setStudentAge(int studentAge){
        this-> studentAge=studentAge;
    }
};

int main(){
    student obj;

    obj.setStudentName("danish");
    obj.setStudentRollNo(30);
    obj.setStudentAge(19);

    cout<<"Student Name : "<<obj.getstudentName()<<endl;
    cout<<"Student RollNo : "<<obj.getRollNo()<<endl;
    cout<<"Student Age : "<<obj.getStudentAge()<<endl;

    return 0;

}