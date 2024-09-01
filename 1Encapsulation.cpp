#include<iostream>
using namespace std;
class Customer{
    private:
    string name;
    int account_number,balance;
    public:
    Customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
    }
    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
        }
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1("Shubh",1,100);
    Customer A2("Hi",2,2000);
    Customer A3("Bye",3,3000);
    A1.display();
    A1.deposit(200);
    // A1.display();
    A1.display();
}
