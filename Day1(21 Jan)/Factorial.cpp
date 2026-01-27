#include<iostream>
using namespace std;
int main(){
    int n,orig_n,fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    orig_n=n;
    while(n>1){
        fact*=n;
        n-=1;
    }
    cout<<"Factorial of "<<orig_n<<" = "<<fact<<endl;
}