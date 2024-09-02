#include<iostream>
using namespace std;
class Student{
    public:
    void print()
    {
    cout<<"I am student\n";
    }
};
class Male
{
    public:
    void Maleprint()
    {
        cout<<"I am Male\n";
    }
};
class Female
{
    public:
    void FeMaleprint()
    {
        cout<<"I am Female\n";
    }
};
class Boy : public Student , public Male
{
    public:
    void Boyprint()
    {
        cout<<"I am Boy\n";
    }
};
class Girl : public Student,public Female{
    public:
    void Girlprint()
    {
        cout<<"I am Girl\n";
    }
};

int main()
{
   Girl G1;
   G1.print();
   Boy B1;
   B1.Maleprint(); 
}