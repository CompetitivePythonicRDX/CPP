#include <iostream>

using namespace std;

int main(){
    int arr[3] = {1,2,3};//Array declaration first form
    cout<<arr[1];//Prints second element of the array as it starts from 0
    
    int marks[6];
    for(int i = 0; i < 6; i++){
        cout<<"Enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];//Getting array elements from user
    }
    for(int i = 0; i < 6; i++){
       cout<<"The marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
    
    return 0;
}