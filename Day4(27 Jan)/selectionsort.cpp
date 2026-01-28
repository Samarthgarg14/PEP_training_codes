#include<iostream>
using namespace std;
void selsort(int a[], int n){
    for(int j=0;j<n;j++){
        int min=j;
        for(int i=j;i<n;i++){
            if(a[i]<a[min]){
                min=i;
            }
        }
        swap(a[min],a[j]);
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
    selsort(arr, n);
    cout<<"\nSorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}