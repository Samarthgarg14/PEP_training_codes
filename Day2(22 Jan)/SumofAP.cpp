#include <iostream>
using namespace std;

int main(){
    int a,d,n; 
    cout<<"Enter first element: ";
    cin>>a;
    cout<<"Enter common difference: ";
    cin>>d;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<(n*(2*a+(n-1)*d))/2<<endl;
}
