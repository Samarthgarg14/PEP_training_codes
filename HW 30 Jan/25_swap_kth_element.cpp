#include <iostream>
#include <algorithm> // For swap
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[1000];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    swap(arr[k - 1], arr[n - k]);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
