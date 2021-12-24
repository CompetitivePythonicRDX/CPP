#include <iostream>

using namespace std;

int main(){
    int age;
    cout<< "enter your age : "<<endl;
    cin>>age;

    if (age > 18){cout<< "Adult"<<endl;} //Condition to be checked
    else if(age>12 && age<18){cout<< "Teen"<<endl;}//To be executed in case if condition fails
    else cout<<"A fuckin' Baby"<<endl;//To be executed if both cases fail
    return 0;
}