#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
            while (i < n - 1 && arr[i] == arr[i+1]) {
                i++;
            }
        }
    }
    cout << endl;
    return 0;
}
