#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number,balance;
    static int total_customer;
    public:
    Customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
    
};
int Customer:: total_customer=0;
int main() {
 Customer a1("shubh",23,455);
 Customer a2("hello",12,890);
 Customer a3("hi",56,890);
  a1.display();
 a2.display();
  a3.display();
}