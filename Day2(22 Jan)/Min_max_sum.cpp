#include <iostream>
using namespace std;

int main() {
    int a[12]={3,5,7,8,13,15,17,18,23,25,27,28};
    int sum=0, mx=a[0], mn=a[0];

    for(int i=0;i<12;i++){
        sum += a[i];
        if(a[i]>mx) mx=a[i];
        if(a[i]<mn) mn=a[i];
    }
    cout << "Sum=" << sum << endl;
    cout << "Max=" << mx << endl;
    cout << "Min=" << mn << endl;
}
