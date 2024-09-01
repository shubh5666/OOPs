#include<iostream>
using namespace std;
class Student
{
    public:
    string name,gender;
    int age;
    
Student(string name,string gender,int age)
{
    this->name = name;
    this->gender = gender;
    this->age = age;
}
void display(){
    cout<<name<<" "<<gender<<" "<<age<<endl;
}
};
int main(){
    Student S1("shubh","Male",10);
    S1.display();
}