#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fir=arr[0];
    int sec=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>fir){
            sec=fir;
            fir=arr[i];
        }
    }
    cout<<"Second largest element in the array: "<<sec;
}