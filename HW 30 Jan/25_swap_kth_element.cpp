#include <iostream>
#include <algorithm> // For swap
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[1000];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    // k is 1-based, so subtract 1 for 0-based index
    // k-th from beginning is index k-1
    // k-th from end is index n-k
    if (k >= 1 && k <= n) {
        swap(arr[k - 1], arr[n - k]);
    } else {
        cout << "Invalid k" << endl;
        return 0; // Return early or handle error
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
