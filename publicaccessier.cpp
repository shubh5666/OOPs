#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age,roll_number;
    string grade;
};
int main(){
    Student s1;
    s1.name = "shubh";
    s1.age = 34;
    s1.roll_number = 12;
    s1.grade = "A++";
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_number<<" "<<s1.grade<<endl;
}
