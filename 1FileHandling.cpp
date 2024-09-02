#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //file ko open krna
    ofstream fout;
    fout.open("Zom.txt");//create kr dega fr open kr dega
    //write kar skta hu
    fout<<"Hello india";
    fout.close();//resourse release kr paauon
}