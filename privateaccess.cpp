#include<iostream>
using namespace std;
class Student{
    private://within private we can't access it so we use setter and getter methods
    string name;
    int age,roll_number;
    string grade;
    public:
    //setter methods
    void setname(string s)
    {
        name = s;
    }
    void setage(int a)
    {
        age = a;
    }
    void setroll_number(int r)
    {
        roll_number = r;
    }
    void setgrade(string g)
    {
        grade = g;
    }
    //gettermethods
    void getname()
    {
        cout<<name<<endl;
    }
       void getage()
    {
        cout<<age<<endl;
    }
       void getroll_number ()
    {
        cout<<roll_number <<endl;
    }
       void getgrade()
    {
        cout<<grade<<endl;
    }
  
};
int main(){
    Student s1;
    //using setter method to set value
     s1.setname = "shubh";
     s1.setage = 34;
    s1.setroll_number = 12;
    s1.setgrade = "A++";
    //using getter methods to print values
    s1.getname();
    s1.getage();
    s1.getroll_number();
    s1.getgrade();
}