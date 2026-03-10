#include<iostream>
using namespace std;
int power(int n,int i){
    if(i==1){
        return n;
    }
    else{
        return n*power(n,i-1);
    }
}
int main(){
    int n,i;
    cout<<"Enter number and its power respectively: ";
    cin>>n>>i;
    cout<<n<<"^"<<i<<" = "<<power(n,i);
    cout<<endl;
    return 0;
}