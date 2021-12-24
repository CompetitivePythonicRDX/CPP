#include <iostream>

using namespace std;

int main() {
    int a,b; //Variables cant be deckared in C++ while taking input, they need to be declared beforehand
    cout<< "Enter a number : "<<endl;
    cin>>a;

    cout<< "Enter the other number"<< endl;
    cin>>b;

    cout<< "The sum is : "<<(a+b)<<endl;
    cout<< "The quotient is : "<<(float)(a/b);//Type casting in c++
    return 0;
}