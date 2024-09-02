#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{

        if(b==0)
        throw " Divided by 0 is not possible";
    int c = a/b;
    cout<<c<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception occured"<<endl;
    }
}



#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
        int *p = new int[1000000000];
        cout<<"Memory allocation is successfull"<<endl;
       delete[]p;
       }
       catch(const bad_alloc &e)
       { 
       cout<<"Exception occured due to line no. 9  : "<<e.what()<<endl;
       }
 return 0;
        }