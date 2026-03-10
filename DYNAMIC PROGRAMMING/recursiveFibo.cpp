#include<iostream>
using namespace std;
int fibMemo(int n,vector<int> &v){
    if(n<=1) return n;
    if(v[n]!=-1){
        return v[n];
    }
    v[n]=fibMemo(n-1,v)+fibMemo(n-2,v);
    return v[n];
}
int fibTab(int n){
    if(n<=1) return n;
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n=3;
    vector<int> v(n+1,-1);
    cout<<"Fibonacci (Memoization): "<<fibMemo(n,v);
    cout<<"\nFibonacci (Tabulation): "<<fibTab(n);
    cout<<endl;
    return 0;
}