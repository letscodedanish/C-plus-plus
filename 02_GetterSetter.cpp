#include<iostream>
using namespace std;

class student{
    int rollno;
    char name[20];
    int marks;
    char grade;

    public:
    int getrollno(){
        cin>>rollno;
        return rollno;
    }
    int getmarks(){
        cin>>marks;
        return marks;
    }

    void setGrade(){
        if(marks>90) grade='A';
        else if(marks>80) grade='B';
        else if(grade>50) grade='C';
        else grade='E';
    }
};

int main(){
    student danish;
    danish.getrollno();
    danish.getmarks();

    danish.setGrade();

}