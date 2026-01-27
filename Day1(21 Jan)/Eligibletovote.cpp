#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age>=18){
        cout<<"Congrats, You are eleigible to vote"<<endl;
    }
    else{
        cout<<"Sorry!, You are not eligible to vote"<<endl;
    }
    return 0;
}