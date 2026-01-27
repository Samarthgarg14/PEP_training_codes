//  you are given and array of prices, maximize the profit and print
#include<iostream>
using namespace std;
int main(){
    int p[]={7,1,5,3,6,4};
    int n=sizeof(p)/sizeof(int);
    int mx=p[0],mn=p[0];
    for(int i=0;i<n;i++){
        if(p[i]<mn){
            mn=p[i];
        }else{
            mx=max(mx,p[i]-mn);
        }
    }
    cout<<mx-mn<<endl;
}