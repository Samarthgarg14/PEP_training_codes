#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;
    n=n+m;
    m=n-m;
    n=n-m;
    cout<<"n="<<n<<endl;
    cout<<"m="<<m<<endl;
    return 0;
}