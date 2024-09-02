#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;

};
class Student : public Human
{
    int roll_no,fees;
    public:
    Student(string name,int age,int roll_no,int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no =  roll_no;
        this->fees = fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }

};
int main()
{
    Student a1("Rohit",34,234,700);
    a1.display();
}