#include<iostream>
using namespace std;
class Animal
{
    public:
      virtual void speak()
    {
        cout<<" bhobho!!!"<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak()
    {
        cout<<"hahahaha!!!";
    }
};
int main()
{
  Animal *p;
  p = new Dog();
  p->speak();  
}