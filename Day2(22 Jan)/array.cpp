#include<iostream>
using namespace std;
int main(){
    int arr[15]={1,2,3,4,5,6,7};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<"Enter Array Elements: ";
    int arr2[5];
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    for(int i:arr2){
        cout<<i<<" ";
    }
    int arr1[0];
    cout<<arr1;
}