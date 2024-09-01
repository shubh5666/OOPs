#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number,balance;
    static int total_customer;
    static int total_balance;
    public:
    Customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance+=balance;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
    void display_total()
    {
        cout<<total_customer<<endl;
    }
    void display_total_balance(){
        cout<<total_balance<<endl;
    }
    
};
int Customer:: total_customer=0;
int Customer::total_balance=0;
int main() {
 Customer a1("shubh",23,455);
 Customer a2("hello",12,890);
 Customer a3("hi",56,890);
  a1.display();
 a2.display();
a3.display();
a1.display_total();
 a2.display_total_balance();
}