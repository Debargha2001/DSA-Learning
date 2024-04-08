#include<iostream>
using namespace std;

typedef struct Student
{
    int roll;
    string name;
    string dept;
    void printDetails(){
        cout<<name<<" "<<dept<<" "<<roll<<endl;
    }
} Student;

void printDetails(Student s){
    cout<<s.name<<" "<<s.dept<<" "<<s.roll<<endl;
}

int main(){
    Student s;
    s.name = "Ram";
    s.dept = "CSE";
    s.roll = 1;
    s.printDetails();
}