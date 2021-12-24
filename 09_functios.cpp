#include <iostream>
#include <string>//Allows user to use string functions and work with them

using namespace std;

int main(){
    string name = "Rohan";
    cout<<name<<endl;
    cout<<"Length of name is : "<<name.length()<<endl;
    cout<<"A substring of the name is : "<<name.substr(0,2)<<endl;//Takes charecter from 0 to 1, one less than last parameter

    return 0;
}