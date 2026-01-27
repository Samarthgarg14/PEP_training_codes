#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                swap(arr[i+1],arr[i]);
            }
        }
    }
    cout<<"\nSorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}