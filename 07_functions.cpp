#include <iostream>

using namespace std;

int fun(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(){
    int a,b;
    cout<<"Enter a numbr : "<<endl;
    cin>>a;
    cout<<"Enter another number : "<<endl;
    cin>>b;
    cout<<"The function returned : "<<fun(a,b)<<endl;
}