#include<iostream>
using namespace std;
class Human
{

    public:
    string name;
    int age,weight;
};

class Student : public Human
{
    private:
int roll_no,fees;

};
int main(){
  
Student A;
A.name;

}