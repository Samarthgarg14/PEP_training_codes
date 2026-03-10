#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 0;
    }
    else{
        int digit=n%10;
        return digit+fact(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" = "<<fact(n);
    cout<<endl;
    return 0;
}