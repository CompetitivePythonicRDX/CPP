//Pointers are an important concept in C++, these are special parameters that can store the address of certain variables
#include <iostream>

using namespace std;

int main(){
    int a = 34;
    int* ptra;//This is a pointer declaration in C++
    ptra = &a;
    cout<<"Address of a is "<<ptra<<endl;//Prints the address of a
    cout<<"Address of a is "<<&a<<endl;
    cout<<"The value of a is "<<*ptra<<endl;//Another way of printing the value of a through the pointer
    
}