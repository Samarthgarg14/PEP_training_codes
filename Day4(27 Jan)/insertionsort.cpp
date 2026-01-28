#include<iostream>
using namespace std;
void insersort(int a[], int n){
    for(int i=0;i<n;i++){
        
    }
}
int main(){
    int n;
    cout<<"Enter array length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insersort(arr, n);
    cout<<"\nSorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}