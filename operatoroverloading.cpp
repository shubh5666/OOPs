#include<iostream>
using namespace std;
class Complex
{
    int real,img;

    public:
    Complex()
    {

    };

    Complex(int real,int img){
        this->real = real;
        this->img = img;
    };
    void display(){
        cout<<real<<" "<<"+i"<<img<<endl;
    }
    Complex operator +(Complex &C)
    {
        Complex ans;
        ans.real = real+C.real;
        ans.img = img +C.img;
        return ans;
    }
};


int main(){
Complex a1(3,4);
Complex a2(6,9);
a1.display();
Complex a3 = a2+a1;
a3.display();
}