#include<iostream>
using namespace std;
class Human
{
    protected:
    string name;
    int age;
public:
Human(string name,int age)
{
    this->name = name;
    this->age = age;
}
void display()
{
    cout<<name<<" "<<age<<endl;
}
void work(){
    cout<<"I am working"<<endl;
}
};


class Student : public Human
{
    private:
int roll_no,fees;
public:
Student(string name,int age,int roll_no,int fees):Human(name,age)
{
    this->roll_no = roll_no;
    this->fees = fees;
}
void display()
{
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
}
};
class Teacher : public Human
{
    private:
    int salary;
    public:
    Teacher(int salary,string name,int age) : Human(name,age){
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
    }
};
int main(){
  
Student A1("Rohit",12,1000,99);
A1.display();
Teacher A2(99,"Mohit",23);
A2.display();
}

