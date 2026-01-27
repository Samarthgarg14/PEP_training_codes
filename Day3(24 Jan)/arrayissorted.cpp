#include<iostream>
using namespace std;
bool checkifsorted(int arr[],int n){
    bool flag,flag1;
    if(n<2) return true;
    else{
        if(arr[0]<arr[1]) flag=1;
        else flag=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]<arr[i+1]) flag1=1;
            else flag1=0;
            if(flag!=flag1) return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checkifsorted(arr,n)) cout<<"Array is sorted !!";
    else cout<<"Array is not sorted !!";
    return 0;
}