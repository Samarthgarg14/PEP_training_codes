#include<iostream>
using namespace std;
void insertion(int arr[],int n,int idx){
    for(int i=7;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=n;
}
int main(){
    int arr[10]={2,4,5,8,6,1,0,9};
    int n,idx;
    cout<<"Enter element :";
    cin>>n;
    cout<<"Enter index: ";
    cin>>idx;
    insertion(arr,n,idx);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}