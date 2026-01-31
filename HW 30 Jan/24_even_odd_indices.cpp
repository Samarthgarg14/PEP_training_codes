#include <iostream>
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

    // Print elements at even indices
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }

    // Print elements at odd indices
    for (int i = 1; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
