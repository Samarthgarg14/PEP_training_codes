#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 2, 3, 1, 5, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Duplicate elements are: ";
    bool found = false;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
            if(i == 1 || arr[i] != arr[i - 2]) {
                cout << arr[i] << " ";
                found = true;
            }
        }
    }
    return 0;
}
