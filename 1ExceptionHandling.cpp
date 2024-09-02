#include<iostream>
using namespace std;
class Customer
{
    public:
    string name;
    int account_number,balance;

    public:
    Customer(string name,int account_number,int balance)
    {
        this->name =name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<" "<<"Rupees is credited successfully"<<endl;
        }
        else {
            throw "Transaction failed";
        }
    }
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<amount<<" "<<"rupees is debited successfully"<<endl;
        }
        else if(amount<0) {
            throw "amount should be greater than 0";
        }
        else{
            throw "Your balance is low";
        }
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    try{
    Customer a1("shubh",5329,500);
    a1.display();
    a1.deposit(500);
    a1.withdraw(200);
    a1.withdraw(5000)
    }
    catch(const char* e)
    {
        cout<<"Exception Occured :"<<e<<endl;
    }

}


