#include<iostream>
using namespace std;
class Area
{
    public:
    int calculateArea(int r)//circle
    {
        cout<<3.14*r*r<<endl;
    }
    int  calculateArea(int l,int b)//rectangle
    {
        cout<<l*b <<endl;
    }
};
int main(){
    Area A1;
    A1.calculateArea(4);
    A1.calculateArea(5,3);
   
}
