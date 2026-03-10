#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" = "<<fact(n);
    cout<<endl;
    return 0;
}