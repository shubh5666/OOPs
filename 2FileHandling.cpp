#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    //file open kro
    fin.open("zoom.txt");
    char c;
    fin>>c;
    while(!fin.eof())
    {
        cout<<c;
        fin>>c;
    };
fin.close();

}