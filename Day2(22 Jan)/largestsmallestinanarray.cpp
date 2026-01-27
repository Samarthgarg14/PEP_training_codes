#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,54,2,3,0};
    int sml=arr[0];
    int lrg=arr[0];
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
        if(arr[i]<sml) sml=arr[i];
        if(arr[i]>lrg) lrg=arr[i];
    }
    cout<<"Smallest Number= "<<sml<<endl;
    cout<<"Largest Number= "<<lrg<<endl;
}