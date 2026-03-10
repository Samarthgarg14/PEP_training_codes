#include<iostream>
using namespace std;
void rev(vector<int> &arr, int p,int q){
    for(int i=p;i<q/2;i++){
        swap(arr[i],arr[q-i-1]);
    }
}
vector<int> printerScan(int N,vector<int> &arr,string s,int curr_page){
    sort(arr.begin(),arr.end());
    
    int size=arr.size();
    for(int i=size-1;i>=0;i--){
        if(arr[i]>N){
            arr.erase(arr.begin()+i,arr.begin()+i+1);
        }
        else{
            break;
        }
    }

    int i=0;
    int j=size-1;
    int mid;
    while(i<=j){
        mid=(i+j)/2;
        if(arr[mid]>curr_page) j=mid-1;
        else i=mid+1;
    }

    if(s=="FORWARD"){
        rev(arr,0,size);
        rev(arr,0,size-j-1);
    }
    else{
        rev(arr,0,j+1);
    }
    return arr;
}
int main(){
    vector<int> arr={1,15,3,7,18};
    printerScan(20,arr,"FORWARD",10);
    for(int i:arr){
        cout<<i<<" "; 
    }
}