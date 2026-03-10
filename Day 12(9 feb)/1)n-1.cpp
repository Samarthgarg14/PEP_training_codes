#include<iostream>
using namespace std;
void fact(int n){
    if(n!=0){
        cout<<n<<" ";
        fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    fact(n);
    // cout<<"Factorial of "<<n<<" = "<<fact(n);
    return 0;
}