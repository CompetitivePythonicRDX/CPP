#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;

    switch(num){
        case 0 :
        cout<<"False"<<endl;
        break;

        case 1 :
        cout<< "True"<<endl;
        break;

        default ://Case to be executed if no cases match
        cout<<"Non binary"<<endl;
    }

    return 0;
}